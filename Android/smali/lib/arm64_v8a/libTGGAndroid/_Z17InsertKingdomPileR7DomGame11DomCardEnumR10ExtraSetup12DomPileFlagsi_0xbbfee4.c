// 函数: _Z17InsertKingdomPileR7DomGame11DomCardEnumR10ExtraSetup12DomPileFlagsi
// 地址: 0xbbfee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4
int32_t x21 = arg2.d
int32_t x0 = CalcKingdomInsertIdx(arg1, arg2)

if (x0 s<= 0x21)
    int64_t i = 0x22
    int64_t x27_1 = 0x173c
    
    do
        if (*(arg1 + x27_1) != 0)
            ShiftPile(arg1, zx.q(i.d - 1), zx.q(i.d))
        
        i -= 1
        x27_1 -= 0x10
    while (i s> sx.q(x0))

AddPileNoSetup(arg1, zx.q(x0), zx.q(x21), arg3, zx.q(x19), arg5)
return RunPileSetup(arg1, zx.q(x21), arg3, zx.q(x19)) __tailcall
