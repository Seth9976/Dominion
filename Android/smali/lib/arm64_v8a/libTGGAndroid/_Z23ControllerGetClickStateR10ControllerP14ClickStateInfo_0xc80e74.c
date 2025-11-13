// 函数: _Z23ControllerGetClickStateR10ControllerP14ClickStateInfo
// 地址: 0xc80e74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int64_t var_68
int64_t x1
int32_t x21_3
void* __offset(ClickStateInfo, 0x100) x22_7
int32_t x23_5
int32_t x24
int32_t x25
int32_t x26
int64_t x27
int64_t x28
int64_t fp

if (x8 == 0)
    ClickStateAlloc(arg1, 0, arg2)
    ClickStateAlloc(arg1, 1, arg2 + 0x10)
    ClickStateAlloc(arg1, 2, arg2 + 0x20)
    ClickStateAlloc(arg1, 3, arg2 + 0x30)
    ClickStateAlloc(arg1, 5, arg2 + 0x40)
    ClickStateAlloc(arg1, 4, arg2 + 0x50)
    ClickStateAlloc(arg1, 7, arg2 + 0x60)
    ClickStateAlloc(arg1, 6, arg2 + 0x70)
    x22_7 = arg2 + 0x90
    x21_3 = 0xe
    ClickStateAlloc(arg1, 0xe, arg2 + 0x80)
    x23_5 = 0x2b
    x27 = 0xa
    x25 = 9
    x1 = 8
    fp = 0xd
    x28 = 0xc
    x26 = 0xa
    x24 = 0xb
    var_68 = 0xb
else if (x8 == 2)
    int32_t x21_8 = *(arg1 + 8)
    ClickStateAllocHand(arg1, 0x24, arg2, zx.q(x21_8))
    ClickStateAllocHand(arg1, 0x25, arg2 + 0x10, zx.q(x21_8))
    ClickStateAllocHand(arg1, 0x26, arg2 + 0x20, zx.q(x21_8))
    ClickStateAllocHand(arg1, 0x27, arg2 + 0x30, zx.q(x21_8))
    ClickStateAllocHand(arg1, 0x28, arg2 + 0x40, zx.q(x21_8))
    ClickStateAllocHand(arg1, 0x29, arg2 + 0x50, zx.q(x21_8))
    ClickStateAllocHand(arg1, 0x2a, arg2 + 0x60, zx.q(x21_8))
    x22_7 = arg2 + 0x80
    ClickStateAlloc(arg1, 0, arg2 + 0x70)
    x21_3 = 0xd
    x23_5 = 0x21
    x24 = 0x20
    x26 = 0x1f
    x25 = 0x23
    x1 = 0x22
    fp = 0xc
    x28 = 0xb
    var_68 = 0xa
    x27 = 9
else
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        Controller* x0_40
        int64_t x1_5
        x0_40, x1_5 = XNoReturn()
        return ControllerUpdateFinal(x0_40, x1_5) __tailcall
    
    ClickStateAlloc(arg1, 0xf, arg2)
    ClickStateAlloc(arg1, 0x10, arg2 + 0x10)
    x27 = 0x11
    ClickStateAlloc(arg1, 0x11, arg2 + 0x20)
    var_68 = 0x12
    ClickStateAlloc(arg1, 0x12, arg2 + 0x30)
    x28 = 0x13
    ClickStateAlloc(arg1, 0x13, arg2 + 0x40)
    fp = 0x14
    ClickStateAlloc(arg1, 0x14, arg2 + 0x50)
    x21_3 = 0x15
    ClickStateAlloc(arg1, 0x15, arg2 + 0x60)
    ClickStateAlloc(arg1, 0x16, arg2 + 0x70)
    ClickStateAlloc(arg1, 0x17, arg2 + 0x80)
    ClickStateAlloc(arg1, 0x18, arg2 + 0x90)
    ClickStateAlloc(arg1, 0x19, arg2 + 0xa0)
    ClickStateAlloc(arg1, 0x1a, arg2 + 0xb0)
    ClickStateAlloc(arg1, 0x1b, arg2 + 0xc0)
    ClickStateAlloc(arg1, 0x1c, arg2 + 0xd0)
    ClickStateAlloc(arg1, 0x1d, arg2 + 0xe0)
    x22_7 = arg2 + 0x100
    ClickStateAlloc(arg1, 0x1e, arg2 + 0xf0)
    x23_5 = 0x21
    x24 = 0x20
    x26 = 0x1f
    x25 = 0x23
    x1 = 0x22

ClickStateAlloc(arg1, x1, x22_7)
ClickStateAlloc(arg1, zx.q(x25), arg2 + (x27 << 4))
ClickStateAlloc(arg1, zx.q(x26), arg2 + (var_68 << 4))
ClickStateAlloc(arg1, zx.q(x24), arg2 + (x28 << 4))
ClickStateAlloc(arg1, zx.q(x23_5), arg2 + (fp << 4))
return zx.q(x21_3)
