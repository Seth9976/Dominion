// 函数: sub_6374e0
// 地址: 0x6374e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[0x46] != 0)
    __builtin_memcpy(&arg1[2], &arg1[0x46], 0x88)

arg1[0x5f3] = 0
__builtin_memcpy(&arg1[0x24], &arg1[0x46], 0x88)
int128_t xmm0 = *arg3
void var_bc
__builtin_memcpy(&var_bc, arg2, 0x88)
int128_t var_2c = xmm0
int64_t var_1c = arg3[1].q
int64_t var_14 = 0
int32_t var_34 = 9
int32_t var_30 = 0
__builtin_memcpy(&arg1[0x70], &var_bc, 0xb0)
arg1[0x5f0] = 1
*arg1 = arg4
sub_4ea0b0(arg4, arg5)
int32_t eax_2 = *arg3 + 0x258

if (eax_2 == arg1)
    uint32_t result = arg1[0x94]
    
    if (*(result + 0x2c) != 0)
        return result
    
    return sub_5cbb20(result)

sub_63b870(eax_2, &data_801800, "&callback.gfx->move == this", 
    "C:\x\ax2017\Jams\Dominion\code\CardMotion.h", 0xb0, 
    "MoveComponent<struct DomLoc,struct DomMoveCallback>::MoveAnim")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
