// 函数: _ZN5Botan3TLS16Compat_Callbacks23tls_session_establishedERKNS0_7SessionE
// 地址: 0xf1b3b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0xc0)

if (x0 == 0)
    return Botan::TLS::Compat_Callbacks::tls_inspect_handshake_msg(Botan::assertion_failure(
        "m_hs_cb != nullptr", "Invalid TLS handshake callback.", "tls_session_established", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x79c8)) __tailcall

jump(*(*x0 + 0x30))
