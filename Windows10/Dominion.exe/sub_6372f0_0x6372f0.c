// 函数: sub_6372f0
// 地址: 0x6372f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_2 = *arg5 + 0x258

if (eax_2 != arg1)
    sub_63b870(eax_2, &data_801800, "&callback.gfx->move == this", 
        "C:\x\ax2017\Jams\Dominion\code\CardMotion.h", 0xb7, 
        "MoveComponent<struct DomLoc,struct DomMoveCallback>::Move")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(arg1 + 0x17c0)
int32_t* result

if (eax_3 == 1)
    int32_t eax_4 = *(arg1 + 0x1c0)
    
    if (eax_4 != *arg2 || eax_4 == 0 || *(arg1 + 0x1c8) != arg2[2] || *(arg1 + 0x1d0) != arg2[4]
            || *(arg1 + 0x1d4) != arg2[5] || *(arg1 + 0x1d8) != arg2[6]
            || *(arg1 + 0x1dc) != arg2[7])
        goto label_637381
    
    result = *(arg1 + 0x1cc)
    
    if (result != arg2[3])
        goto label_637381
else if (eax_3 != 0)
label_637381:
    sub_633aa0(arg1 + 0x250, 1)
label_637393:
    
    if (*(arg1 + 0x118) != 0)
        __builtin_memcpy(arg1 + 8, arg1 + 0x118, 0x88)
    
    *(arg1 + 0x17cc) = 0
    __builtin_memcpy(arg1 + 0x90, arg1 + 0x118, 0x88)
    void var_b4
    __builtin_memcpy(&var_b4, arg2, 0x88)
    int32_t var_2c_1 = arg3
    int32_t var_28_1 = arg4
    result = arg5
    int128_t var_24_1 = *result
    int64_t var_14_1 = *(result + 0x10)
    int64_t var_c_1 = 0
    __builtin_memcpy(arg1 + 0x1c0, &var_b4, 0xb0)
    *(arg1 + 0x17c0) = 1
    uint32_t ecx_1 = *(arg1 + 0x250)
    
    if (*(ecx_1 + 0x2c) == 0)
        return sub_5cbb20(ecx_1)
else
    int32_t eax_12 = *(arg1 + 0x118)
    
    if (eax_12 != *arg2 || eax_12 == 0 || *(arg1 + 0x120) != arg2[2] || *(arg1 + 0x128) != arg2[4]
            || *(arg1 + 0x12c) != arg2[5] || *(arg1 + 0x130) != arg2[6]
            || *(arg1 + 0x134) != arg2[7])
        goto label_637393
    
    result = *(arg1 + 0x124)
    
    if (result != arg2[3])
        goto label_637393

return result
