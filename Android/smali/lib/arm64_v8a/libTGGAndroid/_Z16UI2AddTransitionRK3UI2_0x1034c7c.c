// 函数: _Z16UI2AddTransitionRK3UI2
// 地址: 0x1034c7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AttribMap* x0 = GetEdittedMap(arg1, 0x71)
*(arg1 + 0x1368) = 0
void* result = AttribMapGetDef(*gUI2AttribTable, x0, *macro_ptr_UI2Transition, 0x71)
void* result_1 = result
int64_t var_50

if (result == 0)
    AttribTable* x0_2 = *gUI2AttribTable
    __builtin_memset(&var_50, 0, 0x18)
    AttribMapSetDef(x0_2, x0, 0x71, &var_50)
    result = AttribMapGetDef(*gUI2AttribTable, x0, *macro_ptr_UI2Transition, 0x71)
    result_1 = result
    
    if (*(result_1 + 0x10) == 3)
        return result
else if (*(result_1 + 0x10) == 3)
    return result

AttribMap* x0_5 = GetEdittedMap(arg1, 0x71)
void* x0_7 = AttribMapGetDef(*gUI2AttribTable, x0_5, *macro_ptr_UI2Transition, 0x71)
__builtin_memcpy(&var_50, 
    "\x76\x00\x00\x00\x7e\x00\x00\x00\x80\x00\x00\x00\x85\x00\x00\x00\x8e\x00\x00\x00\xde\x00\x00\x00\x"
"6d\x00\x00\x00", 
    0x1c)
uint64_t x8_4 = zx.q(*(x0_7 + 0x10))
int32_t x20_1

if (x8_4.d s< 1)
    x20_1 = 0x76
else
    int32_t* x10_1 = *(x0_7 + 8)
    int64_t x9_1 = 0
    int64_t x12_1 = 7
    
    do
        if (x12_1.d s>= 1)
            int32_t x14_2 = x10_1[x9_1 * 4]
            int32_t x13_1 = 0
            int32_t x15_1 = x12_1.d
            
            do
                if (*(&var_50 + (sx.q(x13_1) << 2)) == x14_2)
                    x12_1 = sx.q(x15_1) - 1
                    int64_t x16_2 = sx.q(x13_1)
                    x13_1 -= 1
                    *(&var_50 + (x16_2 << 2)) = *(&var_50 + (x12_1 << 2))
                    x15_1 = x12_1.d
                
                x13_1 += 1
            while (x13_1 s< x15_1)
        
        x9_1 += 1
    while (x9_1 != x8_4)
    
    x20_1 = var_50.d

DefinitionVariableArrayAddItem(result_1, DefFindField(*macro_ptr_UI2Transition, 8), 
    *(result_1 + 0x10))
*(*(result_1 + 8) + (sx.q(*(result_1 + 0x10)) << 4) - 0x10) = x20_1
return UI2CreateUndoCheckpoint(true)
