// 函数: _ZN5Botan3TLS16Compat_Callbacks19tls_record_receivedEmPKhm
// 地址: 0xf1b304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x60)

if (x0 == 0)
    return Botan::TLS::Compat_Callbacks::tls_alert(Botan::assertion_failure(
        "m_app_data_cb != nullptr", "Invalid TLS app data callback.", "tls_record_received", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x79ba)) __tailcall

uint64_t var_8 = arg3
int64_t entry_x3
int64_t var_18 = entry_x3
return (*(*x0 + 0x30))(x0, &var_8, &var_18)
