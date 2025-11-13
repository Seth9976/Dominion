// 函数: _Z14LogLinesScroll9UI2Handlei
// 地址: 0xb9cbf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x0_1

if (data_182ac68 == "tbl_logEntries" && data_182a9b8 == x19 && zx.d(data_182a6f8) != 0)
    x0_1 = UI2Exists(zx.q(data_182a9c0))

uint64_t x0_2

if (data_182ac68 != "tbl_logEntries" || data_182a9b8 != x19 || zx.d(data_182a6f8) == 0
        || (x0_1 & 1) == 0)
    x0_2 = UI2GetHandle(zx.q(x19), "tbl_logEntries")
    data_182a9c0 = x0_2.d
    
    if (x0_2.d != 0)
        data_182ac68 = "tbl_logEntries"
        data_182a9b8 = x19
        data_182a6f8 = 1
else
    x0_2 = zx.q(data_182a9c0)

int64_t result = UI2TableGetRange(x0_2)

if ((arg2 & 0x80000000) != 0 && result.d == 0)
    return result

GetClient()
uint32_t x8_3 = (
    DomLogRange(zx.q(GetLogStyleFlag(gDomClient + 0x20728, gDomClient + 0x81450)), zx.q(LocalWho()))
    u>> 0x20).d
int32_t x11_1 = result.d + *V2I1 * arg2
int32_t x9_2 = (result u>> 0x20).d + *(V2I1 + 4) * arg2
uint64_t var_38 = zx.q(x11_1) | zx.q(x9_2) << 0x20
char x10_4

if (x9_2 s>= x8_3)
    int32_t x11_3 = x11_1 - x9_2 + x8_3
    x10_4 = 0
    var_38.d = x11_3 & not.d(x11_3 s>> 0x1f)
    var_38:4.d = x8_3
else
    x10_4 = 1

*(gLogData + 0xc0c) = x10_4
return UI2TableSetRange(zx.q(x19), &var_38, (x9_2 s>= x8_3 ? 1 : 0).b)
