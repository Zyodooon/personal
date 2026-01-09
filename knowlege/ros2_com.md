# ros2コマンド
ROS2の基本的なコマンドを以下に示します。

## ワークスペース・パッケージの作成
```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
ros2 pkg create <package_name> --build-type ament_cmake --dependencies rclcpp std_msgs
```
## ワークスペースのビルド
```bash
cd ~/ros2_ws
colcon build
```
## 特定のパッケージのビルド
```bash
cd ~/ros2_ws
colcon build --packages-select <package_name>
```

### ワークスペースのソース
```bash
cd ~/ros2_ws
source install/setup.bash
```

### ノードの実行
```bash
ros2 run <package_name> <executable_name>
```

### トピックのリスト表示 
```bash
ros2 topic list
```