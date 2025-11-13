// 函数: _Z28sFindSiblingAndParentPointerP14SphereTreeNodeRS0_S1_S1_RPS0_
// 地址: 0xfaa068
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SphereTreeNode* x9_1 = *(arg1 + 0x10)
*arg3 = x9_1
SphereTreeNode* x8 = *(x9_1 + 0x18)

if (x8 == arg1)
    x8 = *(x9_1 + 0x20)

*arg2 = x8
SphereTreeNode* x8_2 = *(*arg3 + 0x10)
*arg4 = x8_2
void* __offset(SphereTreeNode, 0x18) x8_4

if (*(x8_2 + 0x18) == *arg3)
    x8_4 = x8_2 + 0x18
else
    x8_4 = x8_2 + 0x20

*arg5 = x8_4
