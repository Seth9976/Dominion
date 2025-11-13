// 函数: _Z10NodeDeleteRP9RTreeNode
// 地址: 0xfa3cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RTreeNode* x10 = *arg1
int64_t x11 = *gRTreeGlobals
*(gRTreeGlobals + 0x14) -= 1
*x10 = x11
*gRTreeGlobals = x10
*arg1 = nullptr
