// 函数: _Z18SetOrAddFriendDescRK13FriendMessage
// 地址: 0x9b0a08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t i = *(arg1 + 4)
void* result = GetClient()
uint64_t x9 = zx.q(*(result + 0x5028))
int64_t x8_1
int64_t x23_1

if (x9.d s>= 1)
    x8_1 = 0
    x23_1 = 0
    void* x10_1 = result + 0x2c
    
    while (*x10_1 != i)
        x8_1 -= 1
        x23_1 += 0x100000000
        x10_1 += 0x20
        
        if (neg.q(x9) == x8_1)
            goto label_9b0a84

char var_48
int64_t var_40_1
void* x19_1

if (x9.d s>= 1 && x8_1.d != 1)
    XString::XString()
    int64_t v0_3 = *arg1
    *(arg1 + 8)
    XString::operator=(&var_48)
    x19_1 = x0 + (x23_1 s>> 0x1b)
    int64_t var_38_2 = *(arg1 + 0x18)
    var_40_1 = *(arg1 + 0x10)
    *(x19_1 + 0x28) = v0_3
    goto label_9b0b24

label_9b0a84:

if (*(x0 + 0x5028) != 0x280)
    XString::XString()
    int64_t v0_1 = *arg1
    *(arg1 + 8)
    XString::operator=(&var_48)
    int64_t var_38_1 = *(arg1 + 0x18)
    var_40_1 = *(arg1 + 0x10)
    int64_t x8_4 = sx.q(*(x0 + 0x5028))
    *(x0 + 0x5028) = x8_4.d + 1
    x19_1 = x0 + (x8_4 << 5)
    *(x19_1 + 0x28) = v0_1
label_9b0b24:
    XString::operator=(x19_1 + 0x30)
    *(x19_1 + 0x38) = var_40_1.o
    result = XString::~XString()
    *(x0 + 0x502c) = 0

return result
