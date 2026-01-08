# ros2コマンド
ROS2の基本的なコマンドを以下に示します。
## ワークスペースのビルド
```bash
colcon build
```
## 特定のパッケージのビルド
```bash
colcon build --packages-select <package_name>
```
## ワークスペースのソース
```bash
source install/setup.bash
```
## ノードの実行
```bash
ros2 run <package_name> <executable_name>
```
## トピックのリスト表示 
```bash
ros2 topic list
```