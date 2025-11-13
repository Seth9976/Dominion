// 函数: _Z19AnimationUpdateTimeP13StructureAnim
// 地址: 0xc78bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(StructureAnim, 0x8) x22_1 = arg1 + 8
void* i_1 = *x22_1

if (i_1 == 0)
    return 

StructureAnim* x19_1 = arg1
void* __offset(StructureAnim, 0x10) x23_1 = arg1 + 0x10
void* i

do
    AnimSet* x21_1 = *i_1
    i = *(i_1 + 8)
    
    if ((AnimSetUpdateTime(x21_1).d & 1) == 0)
        AnimSet** x8_8 = *(*gpGameData + 8)
        
        if (*(x21_1 + 0x28) == 2)
            *(x19_1 + (sx.q(*(x21_1 + 0x30)) << 4) + 0x38) = 0
            int64_t x9_8 = sx.q(*(x19_1 + 0xc0))
            int32_t x10_4 = *(x21_1 + 0x30)
            *(x19_1 + 0xc0) = x9_8.d + 1
            *(x19_1 + (x9_8 << 2) + 0xc4) = x10_4
        
        AnimSet* x10_1 = *x8_8
        *(x8_8 + 0x14) -= 1
        *x21_1 = x10_1
        *x8_8 = x21_1
        void* x8_1 = *(i_1 + 0x10)
        void* __offset(StructureAnim, 0x8) x8_2
        
        if (x8_1 == 0)
            x8_2 = x22_1
        else
            x8_2 = x8_1 + 8
        
        *x8_2 = *(i_1 + 8)
        void* x8_3 = *(i_1 + 8)
        void* __offset(StructureAnim, 0x10) x8_4
        
        if (x8_3 == 0)
            x8_4 = x23_1
        else
            x8_4 = x8_3 + 0x10
        
        *x8_4 = *(i_1 + 0x10)
        *(x19_1 + 0x18) -= 1
        XPooledFree(i_1, 0x18)
    
    i_1 = i
while (i != 0)
