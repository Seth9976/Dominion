// 函数: _Z25GameSpecific_GetUndoRulesRK7XString
// 地址: 0x9eb4c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfigFromString(XString::operator char const*(), 0x17)
int32_t var_2a8
uint64_t x8 = zx.q(var_2a8)
int32_t var_2a0

if (x8.d u<= 4)
    switch (x8)
        case 0
            return 1
        case 1, 2
            return 0
        case 3
            return 2
        case 4
            if (var_2a0 u< 4)
                return zx.q(3 - var_2a0)
pthread_kill(pthread_self(), 6)
DomSetupConfig* x0_5
int64_t x1
x0_5, x1 = XNoReturn()
return DomConfigEditionFlag(x0_5, x1) __tailcall
