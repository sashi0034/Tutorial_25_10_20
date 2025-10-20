/* IDE のチュートリアルツアー

   # よく使う便利な IDE の機能
   - ショートカットキーは OS やエディタごとに異なるので注意してください。ここで紹介しているのは Visual Studio 系のものです
 
   1. Alt 補完 (インクルードパスの追加など): Alt + Enter (VSCode は . + Enter)
   2. 定義ジャンプ: F12
   3. 参照検索: Shit + F12
   4. リネーム: Ctrl + R, R
   5. メソッドのシグネチャ変更: Ctrl + R, S
   6. メソッドの抽出: Ctrl + R, M
   7. コメント切り替え: Ctrl + K, C
   8. マルチカーソル: Alt + Shit + ↑↓ or Ctrl + Alt + クリック
   9. ファイルのフォーマット: Ctrl + Alt + Enter
   10. git 差分確認
   11. デバッガー
      - ブレークポイント設定
      - アセンブリ表示

   # C++ 固有の機能
   - ソース / ヘッダファイル切り替え: Alt + O 
   - 関数の実装を生成
   - 関数の実装をソースに移動
*/

#include <iostream>
#include <ostream>
#include <vector>

namespace
{
    // 1. Alt 補完でインクルードする
    const std::string CalledAdd = "Called Add()";

    // 3.「定義ジャンプ (F12)」「参照検索 (Shift + F12)」の練習用
    int Add(int a, int b)
    {
        std::cout << CalledAdd << std::endl;

        return a + b;
    }

    // 4. 5. 6.「リネーム (Ctrl + R, R)」「シグネチャ変更 (Ctrl + R, S)」「メソッド抽出 (Ctrl + R, M)」の練習用
    int MultiplyAndAdd(int x, int y, int z)
    {
        int product;

        product = x;
        product = product * y;

        int sum = Add(product, z);

        return sum;
    }

    std::string Greet(const std::string& name)
    {
        return "Hello, " + name + "!";
    }

    // 7.「コメント切り替え (Ctrl + K, C)」を試す
    void Comment()
    {
        int a = 10;
        int b = 20;
        int result = Add(a, b);
        std::cout << "a + b = " << result << std::endl;
    }

    // 8.「マルチカーソル (Alt + Shift + ↑↓)」で一括編集を試す
    void MultiCursor()
    {
        std::vector<std::string> fruits = {
            "Apple",
            "Banana",
            "Cherry",
            "Daemon",
            "Elderberry"
        };

        for (auto& fruit : fruits)
        {
            std::cout << fruit << std::endl;
        }
    }
}

int main()
{
    std::cout << "=== IDE チュートリアル ===" << std::endl;

    int result1 = Add(3, 4); // 2. F12 で Add() にジャンプ
    int result2 = MultiplyAndAdd(2, 3, 5);

    std::cout << "Add(3, 4) = " << result1 << std::endl;
    std::cout << "MultiplyAndAdd(2, 3, 5) = " << result2 << std::endl;

    std::cout << Greet("World") << std::endl;

    Comment();
    MultiCursor();

    std::cout << "Done!" << std::endl;
    return 0;
}
