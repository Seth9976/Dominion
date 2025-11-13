// 函数: _Z10MoveCardTo6CardID8DomWhereS0_11RevealStyle10DomPileLoc13CardMoveStyle12MoveLogStyle
// 地址: 0xad7124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x25))
int32_t var_58 = 0
int64_t var_60 = 0
int32_t var_68 = arg7
int32_t var_70 = 0
int32_t var_78 = *(x0 + 0x48)
int64_t var_80 = *(x0 + 0x40)
return zx.q(MoveCardTo(*(x0 + 8), zx.q(x0_2), zx.q(x25), zx.q(arg2), zx.q(arg6), zx.q(arg3), 
    zx.q(arg4), arg5)) & 1
