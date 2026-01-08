# よく使うgitのコマンドを示す

## 変更をステージングする
```bash
git add <file_name>
```
## 変更をコミットする
```bash
git commit -m "コミットメッセージ"
```
## リモートリポジトリにプッシュする
```bash
git push origin <branch_name>
```
## リモートリポジトリからプルする
```bash
git pull origin <branch_name>
```
## ブランチの作成と切り替え
```bash
git checkout -b <new_branch_name>   
```
## 既存のブランチに切り替え
```bash
git checkout <branch_name>  
```
## ブランチの一覧表示
```bash
git branch
```
## 変更のステータスを確認する
```bash
git status
```
## コミット履歴を表示する   
```bash
git log 
```
## 変更を元に戻す（ステージング前）
```bash
git checkout -- <file_name>
```
## 変更を元に戻す（ステージング後）
```bash
git reset HEAD <file_name>
git checkout -- <file_name>
```
## リモートリポジトリのURLを確認する
```bash
git remote -v
```
## リモートリポジトリのURLを変更する
```bash
git remote set-url origin <new_url>
```
## 変更の差分を表示する
```bash
git diff
```
## 特定のファイルの差分を表示する
```bash
git diff <file_name>
```