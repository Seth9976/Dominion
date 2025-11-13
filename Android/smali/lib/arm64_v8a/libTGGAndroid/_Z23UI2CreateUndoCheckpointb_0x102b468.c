// 函数: _Z23UI2CreateUndoCheckpointb
// 地址: 0x102b468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gUI2 + 8))

if (x9.d != 0)
    void* i = *gUI2
    int64_t x9_1 = i + x9 * 0x19a8
    
    do
        if (zx.d(*(i + 0x19a2)) != 0)
            while (i != 0xffffffff)
                *(i + 0x1378) = 2
                i += 0x19a8
                
                if (x9_1 u<= i)
                    break
                
                while (zx.d(*(i + 0x19a2)) == 0)
                    i += 0x19a8
                    
                    if (i u>= x9_1)
                        goto label_102b500
            
            break
        
        i += 0x19a8
    while (i u< x9_1)

label_102b500:
int32_t i_3 = *(gUI2Editor + 0x88060)

if (i_3 == 0x80)
    DefinitionDelete(*(gUI2Editor + 0x8078))
    memmove(gUI2Editor + 0x7060, gUI2Editor + 0x8080, 0x7ffe0)
    i_3 = *(gUI2Editor + 0x88060) - 1
    *(gUI2Editor + 0x88060) = i_3
    int32_t x9_3 = *(gUI2Editor + 0x88064) - 1
    *(gUI2Editor + 0x88064) = x9_3
    
    if (i_3 s< x9_3)
        goto label_102b580
else if (i_3 s< *(gUI2Editor + 0x88064))
label_102b580:
    int64_t i_1 = sx.q(i_3)
    void* x22_1 = gUI2Editor + muls.dp.d(i_3, 0x1020) + 0x8078
    
    do
        DefinitionDelete(*x22_1)
        i_1 += 1
        x22_1 += 0x1020
    while (i_1 s< sx.q(*(gUI2Editor + 0x88064)))
    
    i_3 = *(gUI2Editor + 0x88060)

void* x19_2 = gUI2Editor + muls.dp.d(i_3, 0x1020)
memcpy(x19_2 + 0x7060, gUI2Editor + 0x6048, 0x1018)
int64_t* result = DefinitionNewDeepCopy(**(gUI2Editor + 0x6008), *macro_ptr_UI2Def)
*(x19_2 + 0x8078) = result
int64_t* x19_3 = *result

if (x19_3[1].d s>= 1)
    int64_t x21_1 = 0
    int64_t i_2 = 0
    
    do
        result = ClearBindings(*x19_3 + x21_1)
        i_2 += 1
        x21_1 += 0x18
    while (i_2 s< sx.q(x19_3[1].d))

int32_t x9_6 = *(gUI2Editor + 0x88060) + 1
*(gUI2Editor + 0x88060) = x9_6
*(gUI2Editor + 0x88064) = x9_6
return result
