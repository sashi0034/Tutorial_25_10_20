/* IDE のチュートリアル

   # よく使う便利な IDE の機能
   - ショートカットキーは OS やエディタごとに異なるので注意してください。ここで紹介しているのは Visual Studio 系のものです
 
   - Alt 補完 (インクルードパスの追加など): Alt + Enter (VSCode は . + Enter)
   - 定義ジャンプ: F12
   - 参照検索: Shit + F12
   - リネーム: Ctrl + R, R
   - メソッドの抽出: Ctrl + R, M
   - メソッドのシグネチャ変更: Ctrl + R, S
   - コメント切り替え: Ctrl + K, C
   - マルチカーソル: Alt + Shit + 上下 or Ctrl + Alt + クリック
   - ファイルのフォーマット: Ctrl + Alt + Enter
   - シンボルジャンプ
   - git 差分確認
   - デバッガー
     - ブレークポイント設定
     - アセンブリ表示

   # C++ 固有の機能
   - ソース / ヘッダファイル切り替え: Alt + O 
   - 関数の実装を生成
   - 関数の実装をソースに移動
*/

#include <iostream>

void main()
{
    std::cout << "Hello, World!" << std::endl;
}
