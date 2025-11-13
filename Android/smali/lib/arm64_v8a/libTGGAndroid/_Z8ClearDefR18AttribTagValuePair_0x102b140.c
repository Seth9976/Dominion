// 函数: _Z8ClearDefR18AttribTagValuePair
// 地址: 0x102b140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *(arg1 + 8)
int32_t x8 = *(x19 + 8)

if (x8 != 0)
    uint64_t x9_1 = zx.q(x8.w)
    
    if (x9_1.d u< *(gUI2 + 0x30))
        int64_t x10_2 = *(gUI2 + 0x28)
        
        if (*(x10_2 + x9_1 * 0x438 + 0x430) == x8)
            void* x21_1 = x10_2 + x9_1 * 0x438
            XString::~XString()
            XString::~XString()
            XString::~XString()
            XString::~XString()
            int32_t x9_2 = *(gUI2 + 0x38)
            *(gUI2 + 0x38) = zx.d(*(x21_1 + 0x430))
            *(x21_1 + 0x430) = x9_2
            *(gUI2 + 0x3c) -= 1

*(x19 + 8) = 0
