// 函数: _Z27FindSiblingAndParentPointerP9RTreeNodeRS0_S1_S1_RPS0_
// 地址: 0xfa3e3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RTreeNode* x9_1 = *(arg1 + 0x18)
*arg3 = x9_1
RTreeNode* x8 = *(x9_1 + 0x20)

if (x8 == arg1)
    x8 = *(x9_1 + 0x28)

*arg2 = x8
RTreeNode* x8_2 = *(*arg3 + 0x18)
*arg4 = x8_2
void* __offset(RTreeNode, 0x20) x8_4

if (*(x8_2 + 0x20) == *arg3)
    x8_4 = x8_2 + 0x20
else
    x8_4 = x8_2 + 0x28

*arg5 = x8_4
