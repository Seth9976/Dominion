// 函数: _Z17NetworkAddressSetR14NetworkAddressPKci
// 地址: 0xf833f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x21 = arg2
int32_t x20 = arg3
void* x0_1 = strchr(x21, 0x3a)
XString::XString()

if (x0_1 != 0)
    char var_28
    XString::operator=(&var_28)
    XString::AppendLength(&var_28, x21.d)
    x20 = atoi(x0_1 + 1)
    x21 = XString::operator char const*()

in_addr_t x0_8 = inet_addr(x21)

if (x0_8 != 0xffffffff)
    goto label_f83470

struct hostent* x0_10 = gethostbyname(x21)
int32_t x21_1

if (x0_10 == 0 || x0_10->h_length != 4 || x0_10->h_addrtype != 2)
    x21_1 = 0
else
    x0_8 = **x0_10->h_addr_list
label_f83470:
    int32_t temp0_1 = _byteswap(x20)
    x21_1 = 1
    *(arg1 + 4) = 2
    *(arg1 + 8) = x0_8
    *arg1 = 1
    *(arg1 + 6) = (temp0_1 u>> 0x10).w

XString::~XString()
return zx.q(x21_1)
