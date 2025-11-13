// 函数: _ZNK5Botan3TLS18Certificate_Verify6verifyERKNS_16X509_CertificateERKNS0_15Handshake_StateERKNS0_6PolicyE
// 地址: 0xe43ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::X509_Certificate::load_subject_public_key()
int64_t* var_50
int64_t* x19 = var_50
int64_t* entry_x3
(*(*entry_x3 + 0xe0))(entry_x3, x19)
Botan::TLS::Handshake_State::parse_sig_format(arg3, x19, (*(arg1 + 0x20)).b, 1)
int64_t* x0_3 = *(arg3 + 8)
int32_t var_38
int32_t x0_4 = (*(*x0_3 + 0x58))(x0_3, x19, &var_50, zx.q(var_38), arg3 + 0xe8, arg1 + 8)
void* var_40

if ((zx.d(var_50.b) & 1) != 0)
    operator delete(var_40)
(*(*x19 + 8))(x19)
return zx.q(x0_4) & 1
