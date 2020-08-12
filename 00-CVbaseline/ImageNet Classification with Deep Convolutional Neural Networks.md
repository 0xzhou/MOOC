## ImageNet Classification with Deep Convolutional Neural Networks

### Abstract

The novel CNN got best result in ILSVRC-2010 and 2012 competition, also was ahead of the second about 10%(with a large margin). Non-saturating neurons(ReLU function) and the efficient GPU implementation make the training process faster. Besides, 'dropout' method help the training out of overfitting.

### Research Objective

high-resolution images classification 

### Background and Problems



### Approach

- eight layers with weights
  - 5 convolutional layers
  - 3 fully connected layers
- ReLU activation function: training faster
- LRN: increase the generalization
- Overlapping Polling
- Reducing overfitting
  - Data augmentation
  - Dropout in FC layers

### Evaluation

1CNN: 训练一个CNN

5CNNs: 训练五个AlexNet取平均值

### Conclusion



### Notes

- [x] top 5 errors -> performance index

- [ ] Response-normalization Layer

  

#### New Unknown Concepts



#### References