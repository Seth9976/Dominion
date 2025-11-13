// 函数: _Z25UI2GetTableVisibleExtents9UI2Handle
// 地址: 0xba1efc
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
        return UI2TableGetRange(x0_2) __tailcall
else
    x0_2 = zx.q(data_182a9c0)

return UI2TableGetRange(x0_2) __tailcall
