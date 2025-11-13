// 函数: _ZN23AndroidNetworkInterface14TCPListenStartEtR18NetworkAddressType
// 地址: 0x107a48c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int32_t x0 = socket(2, 1, 0)
int32_t x19 = x0
int16_t var_58

if (x0 != 0xffffffff)
    var_58.d = 1
    setsockopt(zx.q(x19), 6, 1, &var_58, 4)
    fcntl(zx.q(x19), 4, zx.q(fcntl(zx.q(x19), 3, 0)) | 0x800)

uint16_t x8_2 = (_byteswap(arg2.d) u>> 0x10).w
int32_t* entry_x2
*entry_x2 = 1
var_58 = 2
int32_t var_54 = 0
uint16_t var_56 = x8_2

if (bind(zx.q(x19), &var_58, 0x10) == 0)
    if (listen(zx.q(x19), 0x10) != 0)
        XTrace("tcp listen failed\n")
        x19 = 0
else
    XTrace("tcp bind failed\n")
    x19 = 0

if (*(x22 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
