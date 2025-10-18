# Creating a workspace


- Wrokspace is a directory containing ROS2 packages
- We need to **source** our ROS2 installation workspace in the terminal you plan to work in, so that system can know where the comfiguration file are.
- **We need to resolve the pkg dependencies** before building the ws.
- Before runnning the **colcon build**, we use **rosdep install**. This command installs any libraries that are lacking for the byild.
- `--packages-up-to` は指定パッケージとその依存関係までbuild
- `--symlink-install`symbolic linkでinstall(python特有？)
- `--event-handlers console_direct+`consoleに直接出力(build error原因を特定しやすい)
- `--executor sequential`パッケージを順番に処理(通常は複数同時に並行buildするが、pkgを一つ一つ順番に行い、依存関係のdebugやresourceの少ない環境で役立つ)
- Don't using **source** or **build** command without opening a new terminal after sourcing underlay, because the terminal **doesn't have a clean enviroment and you risk stacking dependencies incorrectly**.
- Don't **Double sourcing**, because it lead to duplicate entries(環境変数に同じ値が繰り返し追加されてしまう状態), which can cause unexpected behavior or error.
- Don't miss the order **source** , build overlay after sourcing undelay. 

***
## その他の知識
- **underlay**は既存の環境,ほかの人がビルドしたpkgで、**overlay**はunderlayの上に作られる新しい開発、ビルド環境。underlayを先にsourseする必要がある。pkgを分離することで、自分の開発環境を独立して管理が可能であり、自分の開発環境のクリーンさを保ちやすくなる。
- Cmake.txtにincludefileやlibraryのPATHを記述
- colcon testはbuildしたあと、単体のテストや統合テストを実行し、確認を行う。ros2 runは実際にpkg内の実行ファイル起動し、開発、運用でnodeを動かす。
-**COLCON_IGNOME**をbuildしてほしくないpkgのあるdirectoryにおいて、例えばsrc/joyのjoy directoryにCOLCON_IGNORE を置いておけばbuildされない
- 特定のpkgだけtestしてみたり、buildしたくないファイルなどがあるときは方法があるが、今はこれを調べて記述する必要はないと思ったので調べろ俺
- Also, we use "shortcuts" to command line options which is defficlut to remember or tedious(面倒な) to write. That is **mixins**, but I don't know how to use and install, so if you use oen, you should look into **mixins**. 
- **mkdir -p**によってもし'mkdir ~/ros2_ws/src'を打った際に、ros2_ws directoryがなかった際に **-p** をつけることにより、ros2_wsも一緒に作られる
- Console means terminal window or standard output.
