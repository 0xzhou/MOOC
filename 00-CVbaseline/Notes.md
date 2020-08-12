## Introduction



Deep learning CV 开山之作：AlexNet

CV三大任务：图像分类，图像切割，目标检测 （基于卷积神经网络）



## AlexNet

拉开了卷积神经网络进行计算机视觉任务的序幕，之前主要基于特征工程。可以将神经网络看作隐特征工程。

 

神经网络某一层参数数量计算公式：$D_i\times (K_s)^2\times K_n +K_n$

$D_i$—输入数据的通道数，若为RGB图片，则为3

$K_s$—卷积核的大小，kernel size

$K_n$—卷积核数目，kernel number



具体结构：代码分析



**ReLU Activition:**

- 网络训练更快
- 防止梯度消失
- 使网络具有稀疏性 ？

**Local Response Normalization(局部响应标准化):**

受真实神经元**侧抑制**启发，有助于AlexNet**泛化能力的提升**。*侧抑制(lateral inhibition)*: 细胞分化变为不同时，它会对周围产生抑制信号，阻止它们向相同方向分化，最终表现为细胞命运的不同。

对于特征层中的某一点，在激活函数之前，按照如下公式进行LRN：
$$
b_{x,y}^i=\frac {a_{x,y}^i}{k+\sum _{j=max(0,i-n/2)}^{min(N-1),i+n/2}(a_{x,y}^i)^2}
$$

**Overlapping Pooling(重叠池化)**
























