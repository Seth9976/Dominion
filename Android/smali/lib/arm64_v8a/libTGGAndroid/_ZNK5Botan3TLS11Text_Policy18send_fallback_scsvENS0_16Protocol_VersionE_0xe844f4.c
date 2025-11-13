// 函数: _ZNK5Botan3TLS11Text_Policy18send_fallback_scsvENS0_16Protocol_VersionE
// 地址: 0xe844f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg1
char var_38
__builtin_strncpy(&var_38, "$send_fallback_scsv", 0x14)
int32_t x19_1
int128_t var_37

if ((Botan::TLS::Text_Policy::get_bool(arg1, &var_38) & 1) == 0)
    x19_1 = 0
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_37:0xf.q)
else
    int32_t entry_x1
    x19_1 = (entry_x1 & 0xffff)
        != zx.d((*(*x20 + 0x108))(x20, zx.q((entry_x1 u>> 8 & 0xff) u> 0xfa ? 1 : 0))) ? 1 : 0
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_37:0xf.q)
return zx.q(x19_1)
