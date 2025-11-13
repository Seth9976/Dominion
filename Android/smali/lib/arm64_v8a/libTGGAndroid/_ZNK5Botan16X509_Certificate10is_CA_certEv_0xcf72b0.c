// 函数: _ZNK5Botan16X509_Certificate10is_CA_certEv
// 地址: 0xcf72b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(Botan::X509_Certificate::data() + 0x428) u<= 2
        && zx.d(*(Botan::X509_Certificate::data() + 0x43c)) != 0)
    return 1

return zx.q(zx.d(*(Botan::X509_Certificate::data() + 0x43d)) != 0 ? 1 : 0)
