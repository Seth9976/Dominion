// 函数: sub_a57bd4
// 地址: 0xa57bd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_1 = CurrentTurnUI()
void* x8 = *(x0 + 8)
int32_t x21

if (*(x8 + 0x165c) == 0)
    x21 = 0
else if (*(x8 + 0x166c) == 0)
    x21 = 1
else if (*(x8 + 0x167c) == 0)
    x21 = 2
else if (*(x8 + 0x168c) == 0)
    x21 = 3
else if (*(x8 + 0x169c) == 0)
    x21 = 4
else if (*(x8 + 0x16ac) == 0)
    x21 = 5
else if (*(x8 + 0x16bc) == 0)
    x21 = 6
else if (*(x8 + 0x16cc) == 0)
    x21 = 7
else if (*(x8 + 0x16dc) == 0)
    x21 = 8
else if (*(x8 + 0x16ec) == 0)
    x21 = 9
else if (*(x8 + 0x16fc) == 0)
    x21 = 0xa
else if (*(x8 + 0x170c) == 0)
    x21 = 0xb
else if (*(x8 + 0x171c) == 0)
    x21 = 0xc
else if (*(x8 + 0x172c) != 0)
    x21 = 0xe
else
    x21 = 0xd

int32_t x0_2 = Trigger_AssociatedInt()
int32_t x25

if (x0_2 != 0)
    x25 = sx.d(x0_2.w)
else
    x25 = -1

int32_t x26

if (x0_2 != 0)
    x26 = x0_2 s>> 0x10
else
    x26 = -1

int32_t x0_4

while (true)
    x0_4 = RandomInt(*(x0 + 8), x21)
    
    if (x0_4 != x26)
        if (x0_4 != x25)
            break

int32_t x22

if (x25 != 0xffffffff)
    x22 = *(*(DomGetContext() + 8) + (zx.q(x25 + 0x13) << 4) + 0x152c)
    
    if (x26 == 0xffffffff)
        goto label_a57fb0
    
    goto label_a57d4c

x22 = 0
int32_t x21_3

if (x26 == 0xffffffff)
label_a57fb0:
    x21_3 = 0
    
    if (x0_4 != 0xffffffff)
        goto label_a57d68
    
    goto label_a57fbc

label_a57d4c:
x21_3 = *(*(DomGetContext() + 8) + (zx.q(x26 + 0x13) << 4) + 0x152c)
int32_t x23_1

if (x0_4 == 0xffffffff)
label_a57fbc:
    x23_1 = 0
    
    if (x25 != 0xffffffff)
    label_a57d94:
        int64_t var_a8_1 = 0
        int32_t var_b0_1 = 0
        int32_t var_b8_1 = 0
        int32_t var_c0_1 = 0
        NotifyEffect(*(x0 + 8), 0x1c, 0xffffffff, 0x14, 0x37, zx.q(x22), 0, 0)
else
label_a57d68:
    x23_1 = *(*(DomGetContext() + 8) + (zx.q(x0_4 + 0x13) << 4) + 0x152c)
    
    if (x25 != 0xffffffff)
        goto label_a57d94

int64_t var_a8_2 = 0
int32_t var_b0_2 = 0
int32_t var_b8_2 = 0
int32_t var_c0_2 = 0
NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x37, zx.q(x23_1), 0, 0)

if (x26 != 0xffffffff)
    int64_t var_a8_3 = 0
    int32_t var_b0_3 = 0
    int32_t var_b8_3 = 0
    int32_t var_c0_3 = 0
    NotifyEffect(*(x0 + 8), 0x1c, 0xffffffff, 0x14, 0x38, zx.q(x21_3), 0, 0)

if (x25 != 0xffffffff)
    int64_t var_a8_4 = 0
    int32_t var_b0_4 = 0
    int32_t var_b8_4 = 0
    int32_t var_c0_4 = 0
    NotifyEffect(*(x0 + 8), 0x1b, 0xffffffff, 0x14, 0x38, zx.q(x22), 0, 0)

if (x26 != 0xffffffff)
    DomGame* x23_2 = *(x0 + 8)
    int32_t x22_1 = *(x23_2 + (zx.q((x0_1 - 1) s% 0x14 + 0x55) << 2) + 0xe6c)
    int32_t var_b8_5 = 0
    int32_t var_c0_5 = 0
    NotifyLog(x23_2, 0x3c, 0xffffffff, 0, nullptr, 0, 0, 0)
    RemovePile(x23_2, zx.q(x26 + 0x13))
    RemovePileFinalize(x23_2)
    int128_t var_a0
    __builtin_memset(&var_a0, 0, 0x50)
    AddPileWhere(x23_2, zx.q(x26 + 0x13), zx.q(x22_1), &var_a0, 0, 0)
    AddExtraPiles(x23_2, &var_a0)
    RunSetupAfterFns()
    int64_t var_a8_5 = 0
    int32_t var_b0_5 = 0
    int32_t var_b8_6 = 0
    int32_t var_c0_6 = 0
    NotifyEffect(x23_2, 0x2e, 0xffffffff, 0, 0, 0, 0, 0)
    int32_t var_b8_7 = 0
    int32_t var_c0_7 = 0
    NotifyLog(*(x0 + 8), 0x42, 0xffffffff, 0, nullptr, 0, zx.q(x22_1), zx.q(x21_3))

void* x0_19 = DomGetContext()
*(AbilityGetRegistered(*(x0_19 + 8), zx.q(*(x0_19 + 0x1c))) + 0x88) = x0_4 | x25 << 0x10
