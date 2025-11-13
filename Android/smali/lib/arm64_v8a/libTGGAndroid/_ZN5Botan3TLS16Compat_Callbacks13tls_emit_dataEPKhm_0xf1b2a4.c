// 函数: _ZN5Botan3TLS16Compat_Callbacks13tls_emit_dataEPKhm
// 地址: 0xf1b2a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 0x30)

if (x0 == 0)
    uint64_t x0_2
    uint8_t* x1_1
    uint64_t x2_1
    x0_2, x1_1, x2_1 = Botan::assertion_failure("m_output_function != nullptr", 
        "Invalid TLS output function callback.", "tls_emit_data", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x79b3)
    return Botan::TLS::Compat_Callbacks::tls_record_received(x0_2, x1_1, x2_1) __tailcall

uint64_t var_8 = arg2
int64_t entry_x2
int64_t var_18 = entry_x2
return (*(*x0 + 0x30))(x0, &var_8, &var_18)
