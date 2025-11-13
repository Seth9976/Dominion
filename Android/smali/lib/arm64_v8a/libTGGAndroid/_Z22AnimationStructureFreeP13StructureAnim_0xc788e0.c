// 函数: _Z22AnimationStructureFreeP13StructureAnim
// 地址: 0xc788e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_1 = *(arg1 + 8)

if (i_1 != 0)
    void* i
    
    do
        void** x8_7 = *i_1
        i = *(i_1 + 8)
        void** x9_4 = *(*gpGameData + 8)
        
        if (x8_7[5].d == 2)
            *(arg1 + (sx.q(x8_7[6].d) << 4) + 0x38) = 0
            int64_t x10_8 = sx.q(*(arg1 + 0xc0))
            int32_t x11_2 = x8_7[6].d
            *(arg1 + 0xc0) = x10_8.d + 1
            *(arg1 + (x10_8 << 2) + 0xc4) = x11_2
        
        void* x11_1 = *x9_4
        *(x9_4 + 0x14) -= 1
        *x8_7 = x11_1
        *x9_4 = x8_7
        void* x8_1 = *(i_1 + 0x10)
        int64_t* x8_2
        
        if (x8_1 == 0)
            x8_2 = arg1 + 8
        else
            x8_2 = x8_1 + 8
        
        *x8_2 = *(i_1 + 8)
        void* x8_3 = *(i_1 + 8)
        void* __offset(StructureAnim, 0x10) x8_4
        
        if (x8_3 == 0)
            x8_4 = arg1 + 0x10
        else
            x8_4 = x8_3 + 0x10
        
        *x8_4 = *(i_1 + 0x10)
        *(arg1 + 0x18) -= 1
        XPooledFree(i_1, 0x18)
        i_1 = i
    while (i != 0)

void* x20_2 = *(*gpGameData + 8)
*(x20_2 + 0x2c) -= 1
int64_t result = StructureAnim::~StructureAnim()
*arg1 = *(x20_2 + 0x18)
*(x20_2 + 0x18) = arg1
return result
