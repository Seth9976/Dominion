// 函数: _ZN5Botan3TLS16Compat_Callbacks9tls_alertENS0_5AlertE
// 地址: 0xf1b364
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x90)

if (x0 == 0)
    return Botan::TLS::Compat_Callbacks::tls_session_established(Botan::assertion_failure(
        "m_alert_cb != nullptr", "Invalid TLS alert callback.", "tls_alert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x79c1)) __tailcall

int64_t entry_x1
int64_t var_8 = entry_x1
return (*(*x0 + 0x30))(x0, &var_8)
