# 지정한 위치 도달 시 가속하는 시나리오
# 지정한 위치는 navigation2 localization mode 에서 2d pose 찍어준 위치.
from rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseArray, Twist
import numpy as np
from scipy.spatial.transform import Rotation
import time
from collections import deque

class EscapeCart(Node):
    def __init__(self):
        super().__init__('escape_cart')

        self.subscriptions = self.create_subscription(
            
        )