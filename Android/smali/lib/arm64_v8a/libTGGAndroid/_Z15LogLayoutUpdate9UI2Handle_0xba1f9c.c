// 函数: _Z15LogLayoutUpdate9UI2Handle
// 地址: 0xba1f9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, LogLayoutClick)
int32_t x0_1

if (data_182ac70 == "tbl_logEntries" && data_182a9c8 == x19 && zx.d(data_182a700) != 0)
    x0_1 = UI2Exists(zx.q(data_182a9d0))

uint64_t x0_2

if (data_182ac70 != "tbl_logEntries" || data_182a9c8 != x19 || zx.d(data_182a700) == 0
        || (x0_1 & 1) == 0)
    x0_2 = UI2GetHandle(zx.q(x19), "tbl_logEntries")
    data_182a9d0 = x0_2.d
    
    if (x0_2.d != 0)
        data_182ac70 = "tbl_logEntries"
        data_182a9c8 = x19
        data_182a700 = 1
else
    x0_2 = zx.q(data_182a9d0)

LogLinesUpdate(x0_2)
int32_t x8_3 = *(gLogData + 0xc14)
int64_t* x1_1

if (x8_3 == 0)
    x1_1 = &data_1832dd8
else
    if (x8_3 != 1)
        pthread_kill(pthread_self(), 6)
        return EntitlementsClick(XNoReturn()) __tailcall
    
    x1_1 = &data_1832df0

return UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0) __tailcall
