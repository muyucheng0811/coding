# C++ 刷題環境設定

這份文件記錄目前的 C++ 刷題流程。換到另一台電腦時，照著本文件安裝與設定，就能在 VS Code 裡儲存 `.cpp` 後直接執行並看到輸出。

## 目前的工作方式

- 編輯器：Visual Studio Code
- 執行工具：VS Code 的 Code Runner 擴充功能
- 原始碼副檔名：`.cpp`
- 常用檔名：`YYMMDDNN.cpp`，例如 `26092501.cpp`
- 工作資料夾：`coding`
- 執行方式：編譯成暫存檔 `temp_output`，執行後自動刪除
- macOS 上輸入 `g++` 時，通常實際使用的是 Apple Clang，這是正常現象

目前的資料夾大致如下：

```text
coding/
├── 26092501.cpp
├── include/
│   └── bits/
│       └── stdc++.h
├── 260924/
│   ├── 26092401.cpp
│   ├── 26092402.cpp
│   └── ...
└── CPP_CODING_SETUP.md
```

## 安裝必要工具

### macOS

安裝 Xcode Command Line Tools：

```bash
xcode-select --install
```

確認編譯器可用：

```bash
g++ --version
```

### Ubuntu / Debian Linux

```bash
sudo apt update
sudo apt install g++
```

確認：

```bash
g++ --version
```

### Windows

建議安裝 MSYS2 的 UCRT64 工具鏈，安裝後在 MSYS2 UCRT64 終端機執行：

```bash
pacman -Syu
pacman -S mingw-w64-ucrt-x86_64-gcc
```

確認：

```bash
g++ --version
```

也需要安裝 Visual Studio Code：

<https://code.visualstudio.com/>

## VS Code 擴充功能

在 Extensions 搜尋並安裝：

- `Code Runner`（作者：Jun Han）

## VS Code 設定

按下 `Command + Shift + P`（Windows/Linux 是 `Ctrl + Shift + P`），搜尋：

```text
Preferences: Open User Settings (JSON)
```

### macOS / Linux 設定

將以下設定放進 `settings.json`。如果已經有相同的設定，只保留一份：

```json
{
    "code-runner.runInTerminal": true,
    "code-runner.preserveFocus": false,
    "code-runner.executorMap": {
        "cpp": "cd \"$dir\" && g++ -std=c++17 -I\"$workspaceRoot/include\" \"$fileName\" -o temp_output && ./temp_output; rm -f temp_output"
    }
}
```

這裡使用 `cd \"$dir\"`，確保 Code Runner 會先切換到目前 `.cpp` 檔案所在的資料夾；`-I\"$workspaceRoot/include\"` 則會讓編譯器找到工作區裡的萬用標頭檔。

### 萬用標頭檔 `bits/stdc++.h`

本環境在 `include/bits/stdc++.h` 放了一份工作區專用的萬用標頭檔。macOS 的 `g++` 通常是 Apple Clang，預設沒有 GCC 專用的 `bits/stdc++.h`，所以需要透過 `-I\"$workspaceRoot/include\"` 指定這個資料夾。

之後可以直接在題目程式開頭使用：

```cpp
#include <bits/stdc++.h>
using namespace std;
```

這份檔案是工作區的一部分，換電腦時要一起保留 `include` 資料夾。它包含刷題常用的 STL 標頭，例如 `vector`、`string`、`algorithm`、`queue`、`map`、`set`、`unordered_map`、`numeric`、`cmath`、`iostream` 等。

這個標頭檔不是 C++ 標準的一部分；如果要把程式交到線上評測，請先確認該平台支援 `bits/stdc++.h`，或改回個別的標準標頭。

這樣也能避免因為 Terminal 不在程式檔所在資料夾而出現：

```text
no such file or directory: '檔名.cpp'
```

`rm -f temp_output` 會在程式結束後刪除暫存執行檔，即使程式回傳錯誤也會嘗試清理。

### Windows PowerShell 設定

如果 Windows 使用 PowerShell，將 C++ 那一行改成：

```json
"cpp": "Set-Location -LiteralPath \"$dir\"; g++ -std=c++17 -I\"$workspaceRoot/include\" \"$fileName\" -o temp_output.exe; if ($LASTEXITCODE -eq 0) { .\\temp_output.exe }; Remove-Item -Force temp_output.exe -ErrorAction SilentlyContinue"
```

## 建立第一個測試程式

建立 `hello.cpp`：

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello, C++!" << endl;
    return 0;
}
```

儲存後，在 VS Code 中執行：

- macOS：按 `Control + Option + N`
- Windows / Linux：按 `Ctrl + Alt + N`
- 或在編輯器內按右鍵，選擇 `Run Code`

終端機應該會看到：

```text
Hello, C++!
```

## 每日刷題流程

1. 開啟 `coding` 資料夾：`File → Open Folder...`
2. 建立今天的 `.cpp` 檔案，例如 `26092502.cpp`
3. 撰寫題目程式並儲存
4. 執行 `Run Code`
5. 從下方 Terminal 查看輸出或輸入測資
6. 程式結束後，`temp_output` 會自動被刪除

## 手動執行方式

如果不使用 Code Runner，可以在 Terminal 進入檔案所在資料夾後執行：

```bash
g++ 26092502.cpp -o temp_output && ./temp_output; rm -f temp_output
```

若檔案放在子資料夾，例如 `260924/26092402.cpp`：

```bash
cd 260924
g++ 26092402.cpp -o temp_output && ./temp_output; rm -f temp_output
```

## 常見問題

### 找不到 `.cpp` 檔案

看到以下錯誤：

```text
no such file or directory: '26092402.cpp'
```

先確認目前位置與檔案：

```bash
pwd
ls
```

如果檔案在別的資料夾，先使用 `cd` 切換過去，或直接在 VS Code 開啟正確的資料夾。

### 產生很多執行檔

確認 `settings.json` 使用的是 `temp_output`，並且指令最後包含：

```bash
rm -f temp_output
```

Windows 則使用：

```powershell
Remove-Item -Force temp_output.exe -ErrorAction SilentlyContinue
```

### 程式需要輸入資料

確認設定中有：

```json
"code-runner.runInTerminal": true
```

這樣輸入游標會出現在下方 Terminal，而不是 Output 面板。

## 換電腦時的快速檢查清單

- [ ] 安裝 Visual Studio Code
- [ ] 安裝 C++ 編譯器，並確認 `g++ --version`
- [ ] 安裝 Code Runner
- [ ] 開啟 `settings.json`
- [ ] 貼上對應作業系統的 `code-runner.executorMap`
- [ ] 開啟 `coding` 資料夾
- [ ] 建立並儲存一個 `.cpp` 測試檔
- [ ] 執行 `Run Code`，確認可以看到輸出

## 一鍵上傳到 GitHub

本資料夾內的 `upload` 腳本會自動完成：

1. 加入所有新的或修改過的練習檔案
2. 建立今天日期的 commit
3. 推送到 GitHub

每天練習完，在 VS Code Terminal 執行：

```bash
./upload
```

### 第一次設定

第一次使用前，需要先在 GitHub 建立一個新的 repository。建議建立空的 repository，不要勾選自動建立 README、`.gitignore` 或 License。

建立完成後，在 `coding` 資料夾內執行以下指令：

```bash
git init -b main
git remote add origin https://github.com/你的帳號/你的repository.git
git config user.name "你的 GitHub 名稱"
git config user.email "你的 GitHub Email"
```

把上面的 GitHub URL 換成你自己的 repository URL。完成後執行第一次上傳：

```bash
./upload
```

之後每天練習完只需要：

```bash
./upload
```

`.gitignore` 已經排除 `temp_output`、`temp_output.exe`、`.o`、`.out` 和 macOS 的 `.DS_Store`，因此不會把編譯產物上傳到 GitHub。

> 注意：`./upload` 會上傳自上次 commit 以來所有未提交的練習內容。如果 GitHub repository 是 private，換電腦時需要先登入 GitHub，或設定 SSH key / token。
