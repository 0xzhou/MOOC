### 01语义分割简介

* 无人驾驶要注重分割的**实时性**

*Fully Convolutional Network Semantic Segmentation*---入门必读



前期知识储备：

- [ ] 卷积神经网络：上采样
- [ ] 分类网络:
  - [ ] VGG net
  - [ ] AlexNet
  - [ ] GoogLeNet
- [ ] PyTorch基础语法



语义分割(Semantic Segmentation)：理解图像pixel的意思 -> 行人和车辆的避障

实例分割(Instance Segmentation)：只关注“我”关心的东西, 同一类型可能会有不同标注

全景分割(Panoptic)：Semantic Segmentation + Instance Segmentation



#### 研究现状

1. 传统方法

Normalized cut: 判断区域纹理，颜色(处理很慢); 实际运用中，每运行一次N-cut，只能切割一次图片，为了切割多个物体需要多次运行。缺点：效率低，准确度不高

Structured Random Forests

SVM

2. 深度学习卷积神经网络方法

**代表问题：**

* 不匹配关系：卷积核大小(全局视角)

  Solution: SPP, ASPP, PSPNet, GCN, DFN

* 不寻常类：室内场景混淆

  Solution: RedNet, RDFNet

*FCN: 开山之作*

SegNet

LinkNet



#### 实现流程

训练->验证->测试

训练：数据准备，预处理

验证：一次训练一次验证

测试：常用指标量化评估；图片形式直观感受



### 02常用数据集、指标、研究成果

注意：数据集的储存形式

CamVid, CityScapes, PASCAL VOC: 综合，道路场景，纯图片

NYUDv2, SUNRGBD : (RGB-D)室内场景



双流网络实现



#### 常用指标:

PA-Pixel Accuracy

MPA-Mean Pixel Accuracy

Mean Intersection over Union: MIoU --衡量分割算法好坏最重要的指标



#### 研究成果:

- 全卷积神经网络，反卷积(图片扩大)进行上采样
- 使用迁移学习的方法进行微调(常用方法)

* 使用跳跃结构使得语义信息和表征信息结合，产生准确而精细的分割
* FCN实现了**像素到像素**最先进的语义分割技术(像素级)
* MIoU超过传统法(outperformed with a large margin) 20%: 结果提升，处理时间大幅提速











