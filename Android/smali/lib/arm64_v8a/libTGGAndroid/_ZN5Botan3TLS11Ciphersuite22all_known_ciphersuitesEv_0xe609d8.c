// 函数: _ZN5Botan3TLS11Ciphersuite22all_known_ciphersuitesEv
// 地址: 0xe609d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_23eca18) & 1) == 0)
    int32_t x0_2
    int128_t v0_1
    int128_t v1_1
    x0_2, v0_1, v1_1 = __cxa_guard_acquire(&data_23eca18)
    
    if (x0_2 != 0)
        v1_1 = data_71c8a0
        v0_1 = data_71c210
        int16_t var_33d8 = 0xa
        char const* const var_33d0_1 = "RSA_WITH_3DES_EDE_CBC_SHA"
        char const* const var_33b8_1 = "3DES"
        char const* const var_33b0_1 = "SHA-1"
        int128_t var_33c8_1 = v1_1
        int128_t var_3440_1 = v0_1
        int128_t var_33a8
        __builtin_memcpy(&var_33a8, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_3
        int128_t v0_2
        x0_3, v0_2 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_3370_1 = "3DES"
        char const* const var_3368_1 = "SHA-1"
        int128_t var_3360
        __builtin_memcpy(&var_3360, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_2 = data_71d430
        char var_3398_1 = x0_3 & 1
        int16_t var_3390_1 = 0x13
        char const* const var_3388_1 = "DHE_DSS_WITH_3DES_EDE_CBC_SHA"
        int128_t var_3380_1 = v0_2
        char x0_4
        int128_t v0_3
        x0_4, v0_3 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_3328_1 = "3DES"
        char const* const var_3320_1 = "SHA-1"
        int128_t var_3318
        __builtin_memcpy(&var_3318, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_3 = data_71ce50
        char var_3350_1 = x0_4 & 1
        int16_t var_3348_1 = 0x16
        char const* const var_3340_1 = "DHE_RSA_WITH_3DES_EDE_CBC_SHA"
        int128_t var_3338_1 = v0_3
        char x0_5
        int128_t v0_4
        x0_5, v0_4 = Botan::TLS::Ciphersuite::is_usable()
        char var_3308_1 = x0_5 & 1
        v0_4 = data_71be70
        int16_t var_3300_1 = 0x1b
        char const* const var_32f8_1 = "DH_anon_WITH_3DES_EDE_CBC_SHA"
        int128_t var_32f0_1 = v0_4
        char const* const var_32e0_1 = "3DES"
        char const* const var_32d8_1 = "SHA-1"
        int128_t var_32d0
        __builtin_memcpy(&var_32d0, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_6
        int128_t v0_5
        x0_6, v0_5 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_32a8_1 = v1_1
        char var_32c0_1 = x0_6 & 1
        int16_t var_32b8_1 = 0x2f
        char const* const var_32b0_1 = "RSA_WITH_AES_128_CBC_SHA"
        char const* const var_3298_1 = "AES-128"
        char const* const var_3290_1 = "SHA-1"
        int128_t var_3410_1 = data_71c560
        int128_t var_3288
        __builtin_memcpy(&var_3288, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_7
        int128_t v0_6
        x0_7, v0_6 = Botan::TLS::Ciphersuite::is_usable()
        char var_3278_1 = x0_7 & 1
        int16_t var_3270_1 = 0x32
        char const* const var_3268_1 = "DHE_DSS_WITH_AES_128_CBC_SHA"
        int128_t var_3260_1 = v0_2
        char const* const var_3250_1 = "AES-128"
        char const* const var_3248_1 = "SHA-1"
        int128_t var_3240
        __builtin_memcpy(&var_3240, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_8
        int128_t v0_7
        x0_8, v0_7 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_3218_1 = v0_3
        char const* const var_3208_1 = "AES-128"
        char const* const var_3200_1 = "SHA-1"
        int128_t var_31f8
        __builtin_memcpy(&var_31f8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_3230_1 = x0_8 & 1
        int16_t var_3228_1 = 0x33
        char const* const var_3220_1 = "DHE_RSA_WITH_AES_128_CBC_SHA"
        char x0_9
        int128_t v0_8
        x0_9, v0_8 = Botan::TLS::Ciphersuite::is_usable()
        char var_31e8_1 = x0_9 & 1
        int16_t var_31e0_1 = 0x34
        char const* const var_31d8_1 = "DH_anon_WITH_AES_128_CBC_SHA"
        int128_t var_31d0_1 = v0_4
        char const* const var_31c0_1 = "AES-128"
        char const* const var_31b8_1 = "SHA-1"
        int128_t var_31b0
        __builtin_memcpy(&var_31b0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_10
        int128_t v0_9
        x0_10, v0_9 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_3188_1 = v1_1
        char var_31a0_1 = x0_10 & 1
        char const* const var_3170_1 = "SHA-1"
        int16_t var_3198_1 = 0x35
        char const* const var_3190_1 = "RSA_WITH_AES_256_CBC_SHA"
        char const* const var_3178_1 = "AES-256"
        int128_t var_3430_1 = data_71d2a0
        int128_t var_3168
        __builtin_memcpy(&var_3168, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_11
        int128_t v0_10
        x0_11, v0_10 = Botan::TLS::Ciphersuite::is_usable()
        char var_3158_1 = x0_11 & 1
        int16_t var_3150_1 = 0x38
        char const* const var_3148_1 = "DHE_DSS_WITH_AES_256_CBC_SHA"
        int128_t var_3140_1 = v0_2
        char const* const var_3130_1 = "AES-256"
        char const* const var_3128_1 = "SHA-1"
        int128_t var_3120
        __builtin_memcpy(&var_3120, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_12
        int128_t v0_11
        x0_12, v0_11 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_30f8_1 = v0_3
        char const* const var_30e8_1 = "AES-256"
        char const* const var_30e0_1 = "SHA-1"
        int128_t var_30d8
        __builtin_memcpy(&var_30d8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_3110_1 = x0_12 & 1
        int16_t var_3108_1 = 0x39
        char const* const var_3100_1 = "DHE_RSA_WITH_AES_256_CBC_SHA"
        char x0_13
        int128_t v0_12
        x0_13, v0_12 = Botan::TLS::Ciphersuite::is_usable()
        char var_30c8_1 = x0_13 & 1
        int16_t var_30c0_1 = 0x3a
        char const* const var_30b8_1 = "DH_anon_WITH_AES_256_CBC_SHA"
        int128_t var_30b0_1 = v0_4
        char const* const var_30a0_1 = "AES-256"
        char const* const var_3098_1 = "SHA-1"
        int128_t var_3090
        __builtin_memcpy(&var_3090, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_14
        int128_t v0_13
        int128_t v1_2
        x0_14, v0_13, v1_2 = Botan::TLS::Ciphersuite::is_usable()
        char var_3080_1 = x0_14 & 1
        v1_2 = data_71aaa0
        char const* const var_3058_1 = "AES-128"
        int16_t var_3078_1 = 0x3c
        char const* const var_3070_1 = "RSA_WITH_AES_128_CBC_SHA256"
        char const* const var_3050_1 = "SHA-256"
        int128_t var_3068_1 = v1_2
        int128_t var_3420_1 = data_71d420
        int128_t var_3048
        __builtin_memcpy(&var_3048, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_15
        int128_t v0_14
        x0_15, v0_14 = Botan::TLS::Ciphersuite::is_usable()
        char var_3038_1 = x0_15 & 1
        int16_t var_3030_1 = 0x3d
        char const* const var_3028_1 = "RSA_WITH_AES_256_CBC_SHA256"
        int128_t var_3020_1 = v1_2
        v0_14.q = 0x20
        v0_14:8.q = 0x20
        char const* const var_3010_1 = "AES-256"
        char const* const var_3008_1 = "SHA-256"
        int128_t var_3000_1 = v0_14
        char var_2ff0_1 = 0
        char x0_16
        int128_t v0_15
        x0_16, v0_15 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2fc8_1 = "AES-128"
        char const* const var_2fc0_1 = "SHA-256"
        int128_t var_2fb8
        __builtin_memcpy(&var_2fb8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_15 = data_71ac50
        char var_2ff0_2 = x0_16 & 1
        int16_t var_2fe8_1 = 0x40
        char const* const var_2fe0_1 = "DHE_DSS_WITH_AES_128_CBC_SHA256"
        int128_t var_2fd8_1 = v0_15
        char x0_17
        int128_t v0_16
        x0_17, v0_16 = Botan::TLS::Ciphersuite::is_usable()
        char var_2fa8_1 = x0_17 & 1
        int16_t var_2fa0_1 = 0x41
        char const* const var_2f98_1 = "RSA_WITH_CAMELLIA_128_CBC_SHA"
        int128_t var_2f90_1 = v1_1
        char const* const var_2f80_1 = "Camellia-128"
        char const* const var_2f78_1 = "SHA-1"
        int128_t var_2f70
        __builtin_memcpy(&var_2f70, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_18
        int128_t v0_17
        x0_18, v0_17 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2f48_1 = v0_2
        char const* const var_2f38_1 = "Camellia-128"
        char const* const var_2f30_1 = "SHA-1"
        int128_t var_2f28
        __builtin_memcpy(&var_2f28, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2f60_1 = x0_18 & 1
        int16_t var_2f58_1 = 0x44
        char const* const var_2f50_1 = "DHE_DSS_WITH_CAMELLIA_128_CBC_SHA"
        char x0_19
        int128_t v0_18
        x0_19, v0_18 = Botan::TLS::Ciphersuite::is_usable()
        char var_2f18_1 = x0_19 & 1
        int16_t var_2f10_1 = 0x45
        char const* const var_2f08_1 = "DHE_RSA_WITH_CAMELLIA_128_CBC_SHA"
        int128_t var_2f00_1 = v0_3
        char const* const var_2ef0_1 = "Camellia-128"
        char const* const var_2ee8_1 = "SHA-1"
        int128_t var_2ee0
        __builtin_memcpy(&var_2ee0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_20
        int128_t v0_19
        x0_20, v0_19 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2eb8_1 = v0_4
        char const* const var_2ea8_1 = "Camellia-128"
        char const* const var_2ea0_1 = "SHA-1"
        int128_t var_2e98
        __builtin_memcpy(&var_2e98, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2ed0_1 = x0_20 & 1
        int16_t var_2ec8_1 = 0x46
        char const* const var_2ec0_1 = "DH_anon_WITH_CAMELLIA_128_CBC_SHA"
        char x0_21
        int128_t v0_20
        x0_21, v0_20 = Botan::TLS::Ciphersuite::is_usable()
        v0_20 = data_71c000
        char var_2e88_1 = x0_21 & 1
        int16_t var_2e80_1 = 0x67
        char const* const var_2e78_1 = "DHE_RSA_WITH_AES_128_CBC_SHA256"
        int128_t var_2e70_1 = v0_20
        char const* const var_2e60_1 = "AES-128"
        char const* const var_2e58_1 = "SHA-256"
        int128_t var_2e50
        __builtin_memcpy(&var_2e50, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_22
        int128_t v0_21
        x0_22, v0_21 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2e28_1 = v0_15
        char var_2e40_1 = x0_22 & 1
        v0_21.q = 0x20
        v0_21:8.q = 0x20
        char const* const var_2e18_1 = "AES-256"
        char const* const var_2e10_1 = "SHA-256"
        int16_t var_2e38_1 = 0x6a
        char const* const var_2e30_1 = "DHE_DSS_WITH_AES_256_CBC_SHA256"
        int128_t var_2e08_1 = v0_21
        char var_2df8_1 = 0
        char x0_23
        int128_t v0_22
        x0_23, v0_22 = Botan::TLS::Ciphersuite::is_usable()
        char var_2df8_2 = x0_23 & 1
        int16_t var_2df0_1 = 0x6b
        char const* const var_2de8_1 = "DHE_RSA_WITH_AES_256_CBC_SHA256"
        int128_t var_2de0_1 = v0_20
        v0_22.q = 0x20
        v0_22:8.q = 0x20
        char const* const var_2dd0_1 = "AES-256"
        char const* const var_2dc8_1 = "SHA-256"
        int128_t var_2dc0_1 = v0_22
        char var_2db0_1 = 0
        char x0_24
        int128_t v0_23
        x0_24, v0_23 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2d88_1 = "AES-128"
        char const* const var_2d80_1 = "SHA-256"
        int128_t var_2d78
        __builtin_memcpy(&var_2d78, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_23 = data_71c570
        char var_2db0_2 = x0_24 & 1
        int16_t var_2da8_1 = 0x6c
        char const* const var_2da0_1 = "DH_anon_WITH_AES_128_CBC_SHA256"
        int128_t var_2d98_1 = v0_23
        char x0_25
        int128_t v0_24
        x0_25, v0_24 = Botan::TLS::Ciphersuite::is_usable()
        char var_2d68_1 = x0_25 & 1
        int16_t var_2d60_1 = 0x6d
        char const* const var_2d58_1 = "DH_anon_WITH_AES_256_CBC_SHA256"
        int128_t var_2d50_1 = v0_23
        v0_24.q = 0x20
        v0_24:8.q = 0x20
        char const* const var_2d40_1 = "AES-256"
        char const* const var_2d38_1 = "SHA-256"
        int128_t var_2d30_1 = v0_24
        char var_2d20_1 = 0
        char x0_26
        int128_t v0_25
        x0_26, v0_25 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2d08_1 = v1_1
        char const* const var_2cf0_1 = "SHA-1"
        int128_t var_2ce8
        __builtin_memcpy(&var_2ce8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2d20_2 = x0_26 & 1
        int16_t var_2d18_1 = 0x84
        char const* const var_2d10_1 = "RSA_WITH_CAMELLIA_256_CBC_SHA"
        char const* const var_2cf8_1 = "Camellia-256"
        char x0_27
        int128_t v0_26
        x0_27, v0_26 = Botan::TLS::Ciphersuite::is_usable()
        char var_2cd8_1 = x0_27 & 1
        int16_t var_2cd0_1 = 0x87
        char const* const var_2cc8_1 = "DHE_DSS_WITH_CAMELLIA_256_CBC_SHA"
        int128_t var_2cc0_1 = v0_2
        char const* const var_2cb0_1 = "Camellia-256"
        char const* const var_2ca8_1 = "SHA-1"
        int128_t var_2ca0
        __builtin_memcpy(&var_2ca0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_28
        int128_t v0_27
        x0_28, v0_27 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2c78_1 = v0_3
        char const* const var_2c68_1 = "Camellia-256"
        char const* const var_2c60_1 = "SHA-1"
        int128_t var_2c58
        __builtin_memcpy(&var_2c58, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2c90_1 = x0_28 & 1
        int16_t var_2c88_1 = 0x88
        char const* const var_2c80_1 = "DHE_RSA_WITH_CAMELLIA_256_CBC_SHA"
        char x0_29
        int128_t v0_28
        x0_29, v0_28 = Botan::TLS::Ciphersuite::is_usable()
        char var_2c48_1 = x0_29 & 1
        int16_t var_2c40_1 = 0x89
        char const* const var_2c38_1 = "DH_anon_WITH_CAMELLIA_256_CBC_SHA"
        int128_t var_2c30_1 = v0_4
        char const* const var_2c20_1 = "Camellia-256"
        char const* const var_2c18_1 = "SHA-1"
        int128_t var_2c10
        __builtin_memcpy(&var_2c10, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_30
        int128_t v0_29
        x0_30, v0_29 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2bd8_1 = "3DES"
        char const* const var_2bd0_1 = "SHA-1"
        int128_t var_2bc8
        __builtin_memcpy(&var_2bc8, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_29 = data_71be80
        char var_2c00_1 = x0_30 & 1
        int16_t var_2bf8_1 = 0x8b
        char const* const var_2bf0_1 = "PSK_WITH_3DES_EDE_CBC_SHA"
        int128_t var_2be8_1 = v0_29
        char x0_31
        int128_t v0_30
        x0_31, v0_30 = Botan::TLS::Ciphersuite::is_usable()
        char var_2bb8_1 = x0_31 & 1
        int16_t var_2bb0_1 = 0x8c
        char const* const var_2ba8_1 = "PSK_WITH_AES_128_CBC_SHA"
        int128_t var_2ba0_1 = v0_29
        char const* const var_2b90_1 = "AES-128"
        char const* const var_2b88_1 = "SHA-1"
        int128_t var_2b80
        __builtin_memcpy(&var_2b80, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_32
        int128_t v0_31
        x0_32, v0_31 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2b58_1 = v0_29
        char const* const var_2b48_1 = "AES-256"
        char const* const var_2b40_1 = "SHA-1"
        int128_t var_2b38
        __builtin_memcpy(&var_2b38, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2b70_1 = x0_32 & 1
        int16_t var_2b68_1 = 0x8d
        char const* const var_2b60_1 = "PSK_WITH_AES_256_CBC_SHA"
        char x0_33
        int128_t v0_32
        x0_33, v0_32 = Botan::TLS::Ciphersuite::is_usable()
        v0_32 = data_71c010
        char var_2b28_1 = x0_33 & 1
        int16_t var_2b20_1 = 0x8f
        char const* const var_2b18_1 = "DHE_PSK_WITH_3DES_EDE_CBC_SHA"
        int128_t var_2b10_1 = v0_32
        char const* const var_2b00_1 = "3DES"
        char const* const var_2af8_1 = "SHA-1"
        int128_t var_2af0
        __builtin_memcpy(&var_2af0, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_34
        int128_t v0_33
        x0_34, v0_33 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2ac8_1 = v0_32
        char const* const var_2ab8_1 = "AES-128"
        char const* const var_2ab0_1 = "SHA-1"
        int128_t var_2aa8
        __builtin_memcpy(&var_2aa8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2ae0_1 = x0_34 & 1
        int16_t var_2ad8_1 = 0x90
        char const* const var_2ad0_1 = "DHE_PSK_WITH_AES_128_CBC_SHA"
        char x0_35
        int128_t v0_34
        x0_35, v0_34 = Botan::TLS::Ciphersuite::is_usable()
        char var_2a98_1 = x0_35 & 1
        int16_t var_2a90_1 = 0x91
        char const* const var_2a88_1 = "DHE_PSK_WITH_AES_256_CBC_SHA"
        int128_t var_2a80_1 = v0_32
        char const* const var_2a70_1 = "AES-256"
        char const* const var_2a68_1 = "SHA-1"
        int128_t var_2a60
        __builtin_memcpy(&var_2a60, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_36
        int128_t v0_35
        x0_36, v0_35 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2a38_1 = v1_1
        char const* const var_2a20_1 = "SHA-1"
        int128_t var_2a18
        __builtin_memcpy(&var_2a18, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2a50_1 = x0_36 & 1
        int16_t var_2a48_1 = 0x96
        char const* const var_2a40_1 = "RSA_WITH_SEED_CBC_SHA"
        char const* const var_2a28_1 = "SEED"
        char x0_37
        int128_t v0_36
        x0_37, v0_36 = Botan::TLS::Ciphersuite::is_usable()
        char var_2a08_1 = x0_37 & 1
        int16_t var_2a00_1 = 0x99
        char const* const var_29f8_1 = "DHE_DSS_WITH_SEED_CBC_SHA"
        int128_t var_29f0_1 = v0_2
        char const* const var_29e0_1 = "SEED"
        char const* const var_29d8_1 = "SHA-1"
        int128_t var_29d0
        __builtin_memcpy(&var_29d0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_38
        int128_t v0_37
        x0_38, v0_37 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_29a8_1 = v0_3
        char const* const var_2998_1 = "SEED"
        char const* const var_2990_1 = "SHA-1"
        int128_t var_2988
        __builtin_memcpy(&var_2988, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_29c0_1 = x0_38 & 1
        int16_t var_29b8_1 = 0x9a
        char const* const var_29b0_1 = "DHE_RSA_WITH_SEED_CBC_SHA"
        char x0_39
        int128_t v0_38
        x0_39, v0_38 = Botan::TLS::Ciphersuite::is_usable()
        char var_2978_1 = x0_39 & 1
        int16_t var_2970_1 = 0x9b
        char const* const var_2968_1 = "DH_anon_WITH_SEED_CBC_SHA"
        int128_t var_2960_1 = v0_4
        char const* const var_2950_1 = "SEED"
        char const* const var_2948_1 = "SHA-1"
        int128_t var_2940
        __builtin_memcpy(&var_2940, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_40
        int128_t v0_39
        int128_t v1_3
        x0_40, v0_39, v1_3 = Botan::TLS::Ciphersuite::is_usable()
        char var_2930_1 = x0_40 & 1
        v1_3 = data_71bb90
        int16_t var_2928_1 = 0x9c
        char const* const var_2920_1 = "RSA_WITH_AES_128_GCM_SHA256"
        char const* const var_2908_1 = "AES-128/GCM"
        char const* const var_2900_1 = "AEAD"
        int128_t var_2918_1 = v1_3
        int128_t var_3400_2 = data_71b5c0
        int128_t var_28f8
        __builtin_memcpy(&var_28f8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_41
        int128_t v0_40
        int128_t v1_4
        x0_41, v0_40, v1_4 = Botan::TLS::Ciphersuite::is_usable()
        char var_28e8_1 = x0_41 & 1
        int16_t var_28e0_1 = 0x9d
        char const* const var_28d8_1 = "RSA_WITH_AES_256_GCM_SHA384"
        v1_4 = data_71be90
        int128_t var_28d0_1 = v1_4
        char const* const var_28c0_1 = "AES-256/GCM"
        char const* const var_28b8_1 = "AEAD"
        int128_t var_33f0_2 = data_71ac60
        int128_t var_28b0
        __builtin_memcpy(&var_28b0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_42
        int128_t v0_41
        x0_42, v0_41 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2878_1 = "AES-128/GCM"
        char const* const var_2870_1 = "AEAD"
        int128_t var_2868
        __builtin_memcpy(&var_2868, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_41 = data_71bba0
        char var_28a0_1 = x0_42 & 1
        int16_t var_2898_1 = 0x9e
        char const* const var_2890_1 = "DHE_RSA_WITH_AES_128_GCM_SHA256"
        int128_t var_2888_1 = v0_41
        char x0_43
        int128_t v0_42
        x0_43, v0_42 = Botan::TLS::Ciphersuite::is_usable()
        v0_42 = data_71b720
        char var_2858_1 = x0_43 & 1
        int16_t var_2850_1 = 0x9f
        char const* const var_2848_1 = "DHE_RSA_WITH_AES_256_GCM_SHA384"
        int128_t var_2840_1 = v0_42
        char const* const var_2830_1 = "AES-256/GCM"
        char const* const var_2828_1 = "AEAD"
        int128_t var_2820
        __builtin_memcpy(&var_2820, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_44
        int128_t v0_43
        int128_t v1_5
        x0_44, v0_43, v1_5 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_27e8_1 = "AES-128/GCM"
        v0_43.d = 1
        v0_43:4.d = 1
        v0_43:8.d = 1
        v0_43:0xc.d = 1
        char const* const var_27e0_1 = "AEAD"
        int128_t var_27d8
        __builtin_memcpy(&var_27d8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_2810_1 = x0_44 & 1
        int16_t var_2808_1 = 0xa2
        char const* const var_2800_1 = "DHE_DSS_WITH_AES_128_GCM_SHA256"
        int128_t var_27f8_1 = v0_43
        char x0_45
        int128_t v0_44
        x0_45, v0_44 = Botan::TLS::Ciphersuite::is_usable()
        v0_44 = data_71b300
        char var_27c8_1 = x0_45 & 1
        int16_t var_27c0_1 = 0xa3
        char const* const var_27b8_1 = "DHE_DSS_WITH_AES_256_GCM_SHA384"
        int128_t var_27b0_1 = v0_44
        char const* const var_27a0_1 = "AES-256/GCM"
        char const* const var_2798_1 = "AEAD"
        int128_t var_2790
        __builtin_memcpy(&var_2790, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_46
        int128_t v0_45
        x0_46, v0_45 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2758_1 = "AES-128/GCM"
        char const* const var_2750_1 = "AEAD"
        int128_t var_2748
        __builtin_memcpy(&var_2748, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_45 = data_71d440
        char var_2780_1 = x0_46 & 1
        int16_t var_2778_1 = 0xa6
        char const* const var_2770_1 = "DH_anon_WITH_AES_128_GCM_SHA256"
        int128_t var_2768_1 = v0_45
        char x0_47
        int128_t v0_46
        x0_47, v0_46 = Botan::TLS::Ciphersuite::is_usable()
        v0_46 = data_71b5d0
        char var_2738_1 = x0_47 & 1
        int16_t var_2730_1 = 0xa7
        char const* const var_2728_1 = "DH_anon_WITH_AES_256_GCM_SHA384"
        int128_t var_2720_1 = v0_46
        char const* const var_2710_1 = "AES-256/GCM"
        char const* const var_2708_1 = "AEAD"
        int128_t var_2700
        __builtin_memcpy(&var_2700, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_48
        int128_t v0_47
        x0_48, v0_47 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_26c8_1 = "AES-128/GCM"
        char const* const var_26c0_1 = "AEAD"
        int128_t var_26b8
        __builtin_memcpy(&var_26b8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_47 = data_71b220
        char var_26f0_1 = x0_48 & 1
        int16_t var_26e8_1 = 0xa8
        char const* const var_26e0_1 = "PSK_WITH_AES_128_GCM_SHA256"
        int128_t var_26d8_1 = v0_47
        char x0_49
        int128_t v0_48
        x0_49, v0_48 = Botan::TLS::Ciphersuite::is_usable()
        v0_48 = data_71aab0
        char var_26a8_1 = x0_49 & 1
        int16_t var_26a0_1 = 0xa9
        char const* const var_2698_1 = "PSK_WITH_AES_256_GCM_SHA384"
        int128_t var_2690_1 = v0_48
        char const* const var_2680_1 = "AES-256/GCM"
        char const* const var_2678_1 = "AEAD"
        int128_t var_2670
        __builtin_memcpy(&var_2670, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_50
        int128_t v0_49
        x0_50, v0_49 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2638_1 = "AES-128/GCM"
        char const* const var_2630_1 = "AEAD"
        int128_t var_2628
        __builtin_memcpy(&var_2628, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_49 = data_71d2b0
        char var_2660_1 = x0_50 & 1
        int16_t var_2658_1 = 0xaa
        char const* const var_2650_1 = "DHE_PSK_WITH_AES_128_GCM_SHA256"
        int128_t var_2648_1 = v0_49
        char x0_51
        int128_t v0_50
        x0_51, v0_50 = Botan::TLS::Ciphersuite::is_usable()
        v0_50 = data_71bbb0
        char var_2618_1 = x0_51 & 1
        int16_t var_2610_1 = 0xab
        char const* const var_2608_1 = "DHE_PSK_WITH_AES_256_GCM_SHA384"
        int128_t var_2600_1 = v0_50
        char const* const var_25f0_1 = "AES-256/GCM"
        char const* const var_25e8_1 = "AEAD"
        int128_t var_25e0
        __builtin_memcpy(&var_25e0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_52
        int128_t v0_51
        x0_52, v0_51 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_25a8_1 = "AES-128"
        char const* const var_25a0_1 = "SHA-256"
        int128_t var_2598
        __builtin_memcpy(&var_2598, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_51 = data_71b830
        char var_25d0_1 = x0_52 & 1
        int16_t var_25c8_1 = 0xae
        char const* const var_25c0_1 = "PSK_WITH_AES_128_CBC_SHA256"
        int128_t var_25b8_1 = v0_51
        char x0_53
        int128_t v0_52
        int128_t v1_6
        x0_53, v0_52, v1_6 = Botan::TLS::Ciphersuite::is_usable()
        char var_2588_1 = x0_53 & 1
        int16_t var_2580_1 = 0xaf
        char const* const var_2578_1 = "PSK_WITH_AES_256_CBC_SHA384"
        v1_6 = data_71b840
        int128_t var_2570_1 = v1_6
        char const* const var_2560_1 = "AES-256"
        char const* const var_2558_1 = "SHA-384"
        int128_t var_3450_2 = data_71c710
        int128_t var_2550
        __builtin_memcpy(&var_2550, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_54
        int128_t v0_53
        x0_54, v0_53 = Botan::TLS::Ciphersuite::is_usable()
        char const* const var_2518_1 = "AES-128"
        char const* const var_2510_1 = "SHA-256"
        int128_t var_2508
        __builtin_memcpy(&var_2508, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        v0_53 = data_71b5e0
        char var_2540_1 = x0_54 & 1
        int16_t var_2538_1 = 0xb2
        char const* const var_2530_1 = "DHE_PSK_WITH_AES_128_CBC_SHA256"
        int128_t var_2528_1 = v0_53
        char x0_55
        int128_t v0_54
        x0_55, v0_54 = Botan::TLS::Ciphersuite::is_usable()
        v0_54 = data_71ca10
        char var_24f8_1 = x0_55 & 1
        int16_t var_24f0_1 = 0xb3
        char const* const var_24e8_1 = "DHE_PSK_WITH_AES_256_CBC_SHA384"
        int128_t var_24e0_1 = v0_54
        char const* const var_24d0_1 = "AES-256"
        char const* const var_24c8_1 = "SHA-384"
        int128_t var_24c0
        __builtin_memcpy(&var_24c0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_56
        int128_t v0_55
        x0_56, v0_55 = Botan::TLS::Ciphersuite::is_usable()
        int128_t var_2498_1 = v1_2
        char const* const var_2488_1 = "Camellia-128"
        char const* const var_2480_1 = "SHA-256"
        int128_t var_2478
        __builtin_memcpy(&var_2478, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_24b0_1 = x0_56 & 1
        int16_t var_24a8_1 = 0xba
        char const* const var_24a0_1 = "RSA_WITH_CAMELLIA_128_CBC_SHA256"
        char x0_57
        int128_t v0_56
        x0_57, v0_56 = Botan::TLS::Ciphersuite::is_usable()
        char var_2468_1 = x0_57 & 1
        int16_t var_2460_1 = 0xbd
        char const* const var_2458_1 = "DHE_DSS_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_2450_1 = v0_15
        char const* const var_2440_1 = "Camellia-128"
        char const* const var_2438_1 = "SHA-256"
        int128_t var_2430
        __builtin_memcpy(&var_2430, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_58
        int128_t v0_57
        x0_58, v0_57 = Botan::TLS::Ciphersuite::is_usable()
        char var_2420_1 = x0_58 & 1
        int16_t var_2418_1 = 0xbe
        char const* const var_2410_1 = "DHE_RSA_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_2408_1 = v0_20
        char const* const var_23f8_1 = "Camellia-128"
        char const* const var_23f0_1 = "SHA-256"
        int128_t var_23e8
        __builtin_memcpy(&var_23e8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_59
        int128_t v0_58
        x0_59, v0_58 = Botan::TLS::Ciphersuite::is_usable()
        char var_23d8_1 = x0_59 & 1
        int16_t var_23d0_1 = 0xbf
        char const* const var_23c8_1 = "DH_anon_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_23c0_1 = v0_23
        char const* const var_23b0_1 = "Camellia-128"
        char const* const var_23a8_1 = "SHA-256"
        int128_t var_23a0
        __builtin_memcpy(&var_23a0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_60
        int128_t v0_59
        x0_60, v0_59 = Botan::TLS::Ciphersuite::is_usable()
        char var_2390_1 = x0_60 & 1
        int16_t var_2388_1 = 0xc0
        char const* const var_2380_1 = "RSA_WITH_CAMELLIA_256_CBC_SHA256"
        int128_t var_2378_1 = v1_2
        v0_59.q = 0x20
        v0_59:8.q = 0x20
        char const* const var_2368_1 = "Camellia-256"
        char const* const var_2360_1 = "SHA-256"
        int128_t var_2358_1 = v0_59
        char var_2348_1 = 0
        char x0_61
        int128_t v0_60
        x0_61, v0_60 = Botan::TLS::Ciphersuite::is_usable()
        char var_2348_2 = x0_61 & 1
        int16_t var_2340_1 = 0xc3
        char const* const var_2338_1 = "DHE_DSS_WITH_CAMELLIA_256_CBC_SHA256"
        int128_t var_2330_1 = v0_15
        v0_60.q = 0x20
        v0_60:8.q = 0x20
        char const* const var_2320_1 = "Camellia-256"
        char const* const var_2318_1 = "SHA-256"
        int128_t var_2310_1 = v0_60
        char var_2300_1 = 0
        char x0_62
        int128_t v0_61
        x0_62, v0_61 = Botan::TLS::Ciphersuite::is_usable()
        char var_2300_2 = x0_62 & 1
        int16_t var_22f8_1 = 0xc4
        char const* const var_22f0_1 = "DHE_RSA_WITH_CAMELLIA_256_CBC_SHA256"
        int128_t var_22e8_1 = v0_20
        v0_61.q = 0x20
        v0_61:8.q = 0x20
        char const* const var_22d8_1 = "Camellia-256"
        char const* const var_22d0_1 = "SHA-256"
        int128_t var_22c8_1 = v0_61
        char var_22b8_1 = 0
        char x0_63
        int128_t v0_62
        x0_63, v0_62 = Botan::TLS::Ciphersuite::is_usable()
        char var_22b8_2 = x0_63 & 1
        int16_t var_22b0_1 = 0xc5
        char const* const var_22a8_1 = "DH_anon_WITH_CAMELLIA_256_CBC_SHA256"
        int128_t var_22a0_1 = v0_23
        v0_62.q = 0x20
        v0_62:8.q = 0x20
        char const* const var_2290_1 = "Camellia-256"
        char const* const var_2288_1 = "SHA-256"
        int128_t var_2280_1 = v0_62
        char var_2270_1 = 0
        char x0_64
        int128_t v0_63
        int128_t v1_7
        x0_64, v0_63, v1_7 = Botan::TLS::Ciphersuite::is_usable()
        char var_2270_2 = x0_64 & 1
        int16_t var_2268_1 = 0x16b7
        char const* const var_2260_1 = "CECPQ1_RSA_WITH_CHACHA20_POLY1305_SHA256"
        v1_7 = data_71afc0
        char const* const var_2248_1 = "ChaCha20Poly1305"
        char const* const var_2240_1 = "AEAD"
        int128_t var_2238
        __builtin_memcpy(&var_2238, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_2258_1 = v1_7
        char x0_65
        int128_t v0_64
        x0_65, v0_64 = Botan::TLS::Ciphersuite::is_usable()
        v0_64 = data_71b5f0
        char var_2228_1 = x0_65 & 1
        int16_t var_2220_1 = 0x16b8
        char const* const var_2218_1 = "CECPQ1_ECDSA_WITH_CHACHA20_POLY1305_SHA256"
        int128_t var_2210_1 = v0_64
        char const* const var_2200_1 = "ChaCha20Poly1305"
        char const* const var_21f8_1 = "AEAD"
        int128_t var_21f0
        __builtin_memcpy(&var_21f0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_66
        int128_t v0_65
        int128_t v1_8
        x0_66, v0_65, v1_8 = Botan::TLS::Ciphersuite::is_usable()
        char var_21e0_1 = x0_66 & 1
        int16_t var_21d8_1 = 0x16b9
        char const* const var_21d0_1 = "CECPQ1_RSA_WITH_AES_256_GCM_SHA384"
        v0_65 = data_71c8b0
        char const* const var_21b8_1 = "AES-256/GCM"
        char const* const var_21b0_1 = "AEAD"
        int128_t var_21a8
        __builtin_memcpy(&var_21a8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_21c8_1 = v0_65
        char x0_67
        int128_t v0_66
        x0_67, v0_66 = Botan::TLS::Ciphersuite::is_usable()
        char var_2198_1 = x0_67 & 1
        int16_t var_2190_1 = 0x16ba
        char const* const var_2188_1 = "CECPQ1_ECDSA_WITH_AES_256_GCM_SHA384"
        int128_t var_2180_1 = data_71c3e0
        char const* const var_2170_1 = "AES-256/GCM"
        char const* const var_2168_1 = "AEAD"
        int128_t var_2160
        __builtin_memcpy(&var_2160, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_68
        int128_t v0_67
        int128_t v1_9
        x0_68, v0_67, v1_9 = Botan::TLS::Ciphersuite::is_usable()
        char var_2150_1 = x0_68 & 1
        int16_t var_2148_1 = 0xc008
        char const* const var_2140_1 = "ECDHE_ECDSA_WITH_3DES_EDE_CBC_SHA"
        v1_9 = data_71b600
        char const* const var_2128_1 = "3DES"
        char const* const var_2120_1 = "SHA-1"
        int128_t var_2118
        __builtin_memcpy(&var_2118, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_2138_1 = v1_9
        char x0_69
        int128_t v0_68
        x0_69, v0_68 = Botan::TLS::Ciphersuite::is_usable()
        char var_2108_1 = x0_69 & 1
        int16_t var_2100_1 = 0xc009
        char const* const var_20f8_1 = "ECDHE_ECDSA_WITH_AES_128_CBC_SHA"
        int128_t var_20f0_1 = v1_9
        char const* const var_20e0_1 = "AES-128"
        char const* const var_20d8_1 = "SHA-1"
        int128_t var_20d0
        __builtin_memcpy(&var_20d0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_70
        int128_t v0_69
        x0_70, v0_69 = Botan::TLS::Ciphersuite::is_usable()
        char var_20c0_1 = x0_70 & 1
        int16_t var_20b8_1 = 0xc00a
        char const* const var_20b0_1 = "ECDHE_ECDSA_WITH_AES_256_CBC_SHA"
        int128_t var_20a8_1 = v1_9
        char const* const var_2098_1 = "AES-256"
        char const* const var_2090_1 = "SHA-1"
        int128_t var_2088
        __builtin_memcpy(&var_2088, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_71
        int128_t v0_70
        x0_71, v0_70 = Botan::TLS::Ciphersuite::is_usable()
        char var_2078_1 = x0_71 & 1
        int16_t var_2070_1 = 0xc012
        v0_70 = data_71ac70
        char const* const var_2068_1 = "ECDHE_RSA_WITH_3DES_EDE_CBC_SHA"
        int128_t var_2060_1 = v0_70
        char const* const var_2050_1 = "3DES"
        char const* const var_2048_1 = "SHA-1"
        int128_t var_2040
        __builtin_memcpy(&var_2040, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_72
        int128_t v0_71
        x0_72, v0_71 = Botan::TLS::Ciphersuite::is_usable()
        char var_2030_1 = x0_72 & 1
        int16_t var_2028_1 = 0xc013
        char const* const var_2020_1 = "ECDHE_RSA_WITH_AES_128_CBC_SHA"
        int128_t var_2018_1 = v0_70
        char const* const var_2008_1 = "AES-128"
        char const* const var_2000_1 = "SHA-1"
        int128_t var_1ff8
        __builtin_memcpy(&var_1ff8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_73
        int128_t v0_72
        x0_73, v0_72 = Botan::TLS::Ciphersuite::is_usable()
        char var_1fe8_1 = x0_73 & 1
        int16_t var_1fe0_1 = 0xc014
        char const* const var_1fd8_1 = "ECDHE_RSA_WITH_AES_256_CBC_SHA"
        int128_t var_1fd0_1 = v0_70
        char const* const var_1fc0_1 = "AES-256"
        char const* const var_1fb8_1 = "SHA-1"
        int128_t var_1fb0
        __builtin_memcpy(&var_1fb0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_74
        int128_t v0_73
        int128_t v1_10
        x0_74, v0_73, v1_10 = Botan::TLS::Ciphersuite::is_usable()
        char var_1fa0_1 = x0_74 & 1
        int16_t var_1f98_1 = 0xc017
        char const* const var_1f90_1 = "ECDH_anon_WITH_3DES_EDE_CBC_SHA"
        v1_10 = data_71cbd0
        char const* const var_1f78_1 = "3DES"
        char const* const var_1f70_1 = "SHA-1"
        int128_t var_1f68
        __builtin_memcpy(&var_1f68, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_1f88_1 = v1_10
        char x0_75
        int128_t v0_74
        x0_75, v0_74 = Botan::TLS::Ciphersuite::is_usable()
        char var_1f58_1 = x0_75 & 1
        int16_t var_1f50_1 = 0xc018
        char const* const var_1f48_1 = "ECDH_anon_WITH_AES_128_CBC_SHA"
        int128_t var_1f40_1 = v1_10
        char const* const var_1f30_1 = "AES-128"
        char const* const var_1f28_1 = "SHA-1"
        int128_t var_1f20
        __builtin_memcpy(&var_1f20, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_76
        int128_t v0_75
        x0_76, v0_75 = Botan::TLS::Ciphersuite::is_usable()
        char var_1f10_1 = x0_76 & 1
        int16_t var_1f08_1 = 0xc019
        char const* const var_1f00_1 = "ECDH_anon_WITH_AES_256_CBC_SHA"
        int128_t var_1ef8_1 = v1_10
        char const* const var_1ee8_1 = "AES-256"
        char const* const var_1ee0_1 = "SHA-1"
        int128_t var_1ed8
        __builtin_memcpy(&var_1ed8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_77
        int128_t v0_76
        x0_77, v0_76 = Botan::TLS::Ciphersuite::is_usable()
        char var_1ec8_1 = x0_77 & 1
        int16_t var_1ec0_1 = 0xc01a
        v0_76 = data_71bea0
        char const* const var_1eb8_1 = "SRP_SHA_WITH_3DES_EDE_CBC_SHA"
        int128_t var_1eb0_1 = v0_76
        char const* const var_1ea0_1 = "3DES"
        char const* const var_1e98_1 = "SHA-1"
        int128_t var_1e90
        __builtin_memcpy(&var_1e90, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_78
        int128_t v0_77
        int128_t v1_11
        x0_78, v0_77, v1_11 = Botan::TLS::Ciphersuite::is_usable()
        char var_1e80_1 = x0_78 & 1
        int16_t var_1e78_1 = 0xc01b
        char const* const var_1e70_1 = "SRP_SHA_RSA_WITH_3DES_EDE_CBC_SHA"
        v1_11 = data_71b850
        char const* const var_1e58_1 = "3DES"
        char const* const var_1e50_1 = "SHA-1"
        int128_t var_1e48
        __builtin_memcpy(&var_1e48, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_1e68_1 = v1_11
        char x0_79
        int128_t v0_78
        x0_79, v0_78 = Botan::TLS::Ciphersuite::is_usable()
        char var_1e38_1 = x0_79 & 1
        int16_t var_1e30_1 = 0xc01c
        v0_78 = data_71ac80
        char const* const var_1e28_1 = "SRP_SHA_DSS_WITH_3DES_EDE_CBC_SHA"
        int128_t var_1e20_1 = v0_78
        char const* const var_1e10_1 = "3DES"
        char const* const var_1e08_1 = "SHA-1"
        int128_t var_1e00
        __builtin_memcpy(&var_1e00, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_80
        int128_t v0_79
        x0_80, v0_79 = Botan::TLS::Ciphersuite::is_usable()
        char var_1df0_1 = x0_80 & 1
        int16_t var_1de8_1 = 0xc01d
        char const* const var_1de0_1 = "SRP_SHA_WITH_AES_128_CBC_SHA"
        int128_t var_1dd8_1 = v0_76
        char const* const var_1dc8_1 = "AES-128"
        char const* const var_1dc0_1 = "SHA-1"
        int128_t var_1db8
        __builtin_memcpy(&var_1db8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_81
        int128_t v0_80
        x0_81, v0_80 = Botan::TLS::Ciphersuite::is_usable()
        char var_1da8_1 = x0_81 & 1
        int16_t var_1da0_1 = 0xc01e
        char const* const var_1d98_1 = "SRP_SHA_RSA_WITH_AES_128_CBC_SHA"
        int128_t var_1d90_1 = v1_11
        char const* const var_1d80_1 = "AES-128"
        char const* const var_1d78_1 = "SHA-1"
        int128_t var_1d70
        __builtin_memcpy(&var_1d70, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_82
        int128_t v0_81
        x0_82, v0_81 = Botan::TLS::Ciphersuite::is_usable()
        char var_1d60_1 = x0_82 & 1
        int16_t var_1d58_1 = 0xc01f
        char const* const var_1d50_1 = "SRP_SHA_DSS_WITH_AES_128_CBC_SHA"
        int128_t var_1d48_1 = v0_78
        char const* const var_1d38_1 = "AES-128"
        char const* const var_1d30_1 = "SHA-1"
        int128_t var_1d28
        __builtin_memcpy(&var_1d28, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_83
        int128_t v0_82
        x0_83, v0_82 = Botan::TLS::Ciphersuite::is_usable()
        char var_1d18_1 = x0_83 & 1
        int16_t var_1d10_1 = 0xc020
        char const* const var_1d08_1 = "SRP_SHA_WITH_AES_256_CBC_SHA"
        int128_t var_1d00_1 = v0_76
        char const* const var_1cf0_1 = "AES-256"
        char const* const var_1ce8_1 = "SHA-1"
        int128_t var_1ce0
        __builtin_memcpy(&var_1ce0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_84
        int128_t v0_83
        x0_84, v0_83 = Botan::TLS::Ciphersuite::is_usable()
        char var_1cd0_1 = x0_84 & 1
        int16_t var_1cc8_1 = 0xc021
        char const* const var_1cc0_1 = "SRP_SHA_RSA_WITH_AES_256_CBC_SHA"
        int128_t var_1cb8_1 = v1_11
        char const* const var_1ca8_1 = "AES-256"
        char const* const var_1ca0_1 = "SHA-1"
        int128_t var_1c98
        __builtin_memcpy(&var_1c98, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_85
        int128_t v0_84
        x0_85, v0_84 = Botan::TLS::Ciphersuite::is_usable()
        char var_1c88_1 = x0_85 & 1
        int16_t var_1c80_1 = 0xc022
        char const* const var_1c78_1 = "SRP_SHA_DSS_WITH_AES_256_CBC_SHA"
        int128_t var_1c70_1 = v0_78
        char const* const var_1c60_1 = "AES-256"
        char const* const var_1c58_1 = "SHA-1"
        int128_t var_1c50
        __builtin_memcpy(&var_1c50, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_86
        int128_t v0_85
        int128_t v1_12
        x0_86, v0_85, v1_12 = Botan::TLS::Ciphersuite::is_usable()
        char var_1c40_1 = x0_86 & 1
        int16_t var_1c38_1 = 0xc023
        char const* const var_1c30_1 = "ECDHE_ECDSA_WITH_AES_128_CBC_SHA256"
        v1_12 = data_71d450
        char const* const var_1c18_1 = "AES-128"
        char const* const var_1c10_1 = "SHA-256"
        int128_t var_1c08
        __builtin_memcpy(&var_1c08, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_1c28_1 = v1_12
        char x0_87
        int128_t v0_86
        x0_87, v0_86 = Botan::TLS::Ciphersuite::is_usable()
        char var_1bf8_1 = x0_87 & 1
        int16_t var_1bf0_1 = 0xc024
        v0_86 = data_71bd40
        char const* const var_1be8_1 = "ECDHE_ECDSA_WITH_AES_256_CBC_SHA384"
        int128_t var_1be0_1 = v0_86
        char const* const var_1bd0_1 = "AES-256"
        char const* const var_1bc8_1 = "SHA-384"
        int128_t var_1bc0
        __builtin_memcpy(&var_1bc0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_88
        int128_t v0_87
        int128_t v1_13
        x0_88, v0_87, v1_13 = Botan::TLS::Ciphersuite::is_usable()
        char var_1bb0_1 = x0_88 & 1
        int16_t var_1ba8_1 = 0xc027
        char const* const var_1ba0_1 = "ECDHE_RSA_WITH_AES_128_CBC_SHA256"
        v1_13 = data_71cfe0
        char const* const var_1b88_1 = "AES-128"
        char const* const var_1b80_1 = "SHA-256"
        int128_t var_1b78
        __builtin_memcpy(&var_1b78, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_1b98_1 = v1_13
        char x0_89
        int128_t v0_88
        x0_89, v0_88 = Botan::TLS::Ciphersuite::is_usable()
        char var_1b68_1 = x0_89 & 1
        int16_t var_1b60_1 = 0xc028
        v0_88 = data_71c020
        char const* const var_1b58_1 = "ECDHE_RSA_WITH_AES_256_CBC_SHA384"
        int128_t var_1b50_1 = v0_88
        char const* const var_1b40_1 = "AES-256"
        char const* const var_1b38_1 = "SHA-384"
        int128_t var_1b30
        __builtin_memcpy(&var_1b30, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_90
        int128_t v0_89
        int128_t v1_14
        x0_90, v0_89, v1_14 = Botan::TLS::Ciphersuite::is_usable()
        char var_1b20_1 = x0_90 & 1
        int16_t var_1b18_1 = 0xc02b
        char const* const var_1b10_1 = "ECDHE_ECDSA_WITH_AES_128_GCM_SHA256"
        v1_14 = data_71d0e0
        char const* const var_1af8_1 = "AES-128/GCM"
        char const* const var_1af0_1 = "AEAD"
        int128_t var_1ae8
        __builtin_memcpy(&var_1ae8, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_1b08_1 = v1_14
        char x0_91
        int128_t v0_90
        x0_91, v0_90 = Botan::TLS::Ciphersuite::is_usable()
        char var_1ad8_1 = x0_91 & 1
        int16_t var_1ad0_1 = 0xc02c
        v0_90 = data_71ac90
        char const* const var_1ac8_1 = "ECDHE_ECDSA_WITH_AES_256_GCM_SHA384"
        int128_t var_1ac0_1 = v0_90
        char const* const var_1ab0_1 = "AES-256/GCM"
        char const* const var_1aa8_1 = "AEAD"
        int128_t var_1aa0
        __builtin_memcpy(&var_1aa0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_92
        int128_t v0_91
        int128_t v1_15
        x0_92, v0_91, v1_15 = Botan::TLS::Ciphersuite::is_usable()
        char var_1a90_1 = x0_92 & 1
        int16_t var_1a88_1 = 0xc02f
        char const* const var_1a80_1 = "ECDHE_RSA_WITH_AES_128_GCM_SHA256"
        v1_15 = data_71aac0
        char const* const var_1a68_1 = "AES-128/GCM"
        char const* const var_1a60_1 = "AEAD"
        int128_t var_1a58
        __builtin_memcpy(&var_1a58, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_1a78_1 = v1_15
        char x0_93
        int128_t v0_92
        x0_93, v0_92 = Botan::TLS::Ciphersuite::is_usable()
        char var_1a48_1 = x0_93 & 1
        int16_t var_1a40_1 = 0xc030
        v0_92 = data_71b100
        char const* const var_1a38_1 = "ECDHE_RSA_WITH_AES_256_GCM_SHA384"
        int128_t var_1a30_1 = v0_92
        char const* const var_1a20_1 = "AES-256/GCM"
        char const* const var_1a18_1 = "AEAD"
        int128_t var_1a10
        __builtin_memcpy(&var_1a10, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_94
        int128_t v0_93
        int128_t v1_16
        x0_94, v0_93, v1_16 = Botan::TLS::Ciphersuite::is_usable()
        char var_1a00_1 = x0_94 & 1
        int16_t var_19f8_1 = 0xc034
        char const* const var_19f0_1 = "ECDHE_PSK_WITH_3DES_EDE_CBC_SHA"
        v1_16 = data_71bbc0
        char const* const var_19d8_1 = "3DES"
        char const* const var_19d0_1 = "SHA-1"
        int128_t var_19c8
        __builtin_memcpy(&var_19c8, 
            "\x18\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_19e8_1 = v1_16
        char x0_95
        int128_t v0_94
        x0_95, v0_94 = Botan::TLS::Ciphersuite::is_usable()
        char var_19b8_1 = x0_95 & 1
        int16_t var_19b0_1 = 0xc035
        char const* const var_19a8_1 = "ECDHE_PSK_WITH_AES_128_CBC_SHA"
        int128_t var_19a0_1 = v1_16
        char const* const var_1990_1 = "AES-128"
        char const* const var_1988_1 = "SHA-1"
        int128_t var_1980
        __builtin_memcpy(&var_1980, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_96
        int128_t v0_95
        x0_96, v0_95 = Botan::TLS::Ciphersuite::is_usable()
        char var_1970_1 = x0_96 & 1
        int16_t var_1968_1 = 0xc036
        char const* const var_1960_1 = "ECDHE_PSK_WITH_AES_256_CBC_SHA"
        int128_t var_1958_1 = v1_16
        char const* const var_1948_1 = "AES-256"
        char const* const var_1940_1 = "SHA-1"
        int128_t var_1938
        __builtin_memcpy(&var_1938, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x14\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_97
        int128_t v0_96
        x0_97, v0_96 = Botan::TLS::Ciphersuite::is_usable()
        char var_1928_1 = x0_97 & 1
        int16_t var_1920_1 = 0xc037
        v0_96 = data_71d460
        char const* const var_1918_1 = "ECDHE_PSK_WITH_AES_128_CBC_SHA256"
        int128_t var_1910_1 = v0_96
        char const* const var_1900_1 = "AES-128"
        char const* const var_18f8_1 = "SHA-256"
        int128_t var_18f0
        __builtin_memcpy(&var_18f0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_98
        int128_t v0_97
        int128_t v1_17
        x0_98, v0_97, v1_17 = Botan::TLS::Ciphersuite::is_usable()
        char var_18e0_1 = x0_98 & 1
        int16_t var_18d8_1 = 0xc038
        char const* const var_18d0_1 = "ECDHE_PSK_WITH_AES_256_CBC_SHA384"
        v1_17 = data_71c3f0
        char const* const var_18b8_1 = "AES-256"
        char const* const var_18b0_1 = "SHA-384"
        int128_t var_18a8
        __builtin_memcpy(&var_18a8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_18c8_1 = v1_17
        char x0_99
        int128_t v0_98
        x0_99, v0_98 = Botan::TLS::Ciphersuite::is_usable()
        char var_1898_1 = x0_99 & 1
        int16_t var_1890_1 = 0xc050
        char const* const var_1888_1 = "RSA_WITH_ARIA_128_GCM_SHA256"
        int128_t var_1880_1 = v1_3
        char const* const var_1870_1 = "ARIA-128/GCM"
        char const* const var_1868_1 = "AEAD"
        int128_t var_1860
        __builtin_memcpy(&var_1860, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_100
        int128_t v0_99
        x0_100, v0_99 = Botan::TLS::Ciphersuite::is_usable()
        char var_1850_1 = x0_100 & 1
        int16_t var_1848_1 = 0xc051
        char const* const var_1840_1 = "RSA_WITH_ARIA_256_GCM_SHA384"
        int128_t var_1838_1 = v1_4
        char const* const var_1828_1 = "ARIA-256/GCM"
        char const* const var_1820_1 = "AEAD"
        int128_t var_1818
        __builtin_memcpy(&var_1818, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_101
        int128_t v0_100
        x0_101, v0_100 = Botan::TLS::Ciphersuite::is_usable()
        char var_1808_1 = x0_101 & 1
        int16_t var_1800_1 = 0xc052
        char const* const var_17f8_1 = "DHE_RSA_WITH_ARIA_128_GCM_SHA256"
        int128_t var_17f0_1 = v0_41
        char const* const var_17e0_1 = "ARIA-128/GCM"
        char const* const var_17d8_1 = "AEAD"
        int128_t var_17d0
        __builtin_memcpy(&var_17d0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_102
        int128_t v0_101
        x0_102, v0_101 = Botan::TLS::Ciphersuite::is_usable()
        char var_17c0_1 = x0_102 & 1
        int16_t var_17b8_1 = 0xc053
        char const* const var_17b0_1 = "DHE_RSA_WITH_ARIA_256_GCM_SHA384"
        int128_t var_17a8_1 = v0_42
        char const* const var_1798_1 = "ARIA-256/GCM"
        char const* const var_1790_1 = "AEAD"
        int128_t var_1788
        __builtin_memcpy(&var_1788, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_103
        int128_t v0_102
        x0_103, v0_102 = Botan::TLS::Ciphersuite::is_usable()
        char var_1778_1 = x0_103 & 1
        int16_t var_1770_1 = 0xc056
        char const* const var_1768_1 = "DHE_DSS_WITH_ARIA_128_GCM_SHA256"
        v0_102.d = 1
        v0_102:4.d = 1
        v0_102:8.d = 1
        v0_102:0xc.d = 1
        int128_t var_1760_1 = v0_102
        char const* const var_1750_1 = "ARIA-128/GCM"
        char const* const var_1748_1 = "AEAD"
        int128_t var_1740
        __builtin_memcpy(&var_1740, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_104
        int128_t v0_103
        x0_104, v0_103 = Botan::TLS::Ciphersuite::is_usable()
        char var_1730_1 = x0_104 & 1
        int16_t var_1728_1 = 0xc057
        char const* const var_1720_1 = "DHE_DSS_WITH_ARIA_256_GCM_SHA384"
        int128_t var_1718_1 = v0_44
        char const* const var_1708_1 = "ARIA-256/GCM"
        char const* const var_1700_1 = "AEAD"
        int128_t var_16f8
        __builtin_memcpy(&var_16f8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_105
        int128_t v0_104
        x0_105, v0_104 = Botan::TLS::Ciphersuite::is_usable()
        char var_16e8_1 = x0_105 & 1
        int16_t var_16e0_1 = 0xc05a
        char const* const var_16d8_1 = "DH_anon_WITH_ARIA_128_GCM_SHA256"
        int128_t var_16d0_1 = v0_45
        char const* const var_16c0_1 = "ARIA-128/GCM"
        char const* const var_16b8_1 = "AEAD"
        int128_t var_16b0
        __builtin_memcpy(&var_16b0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_106
        int128_t v0_105
        x0_106, v0_105 = Botan::TLS::Ciphersuite::is_usable()
        char var_16a0_1 = x0_106 & 1
        int16_t var_1698_1 = 0xc05b
        char const* const var_1690_1 = "DH_anon_WITH_ARIA_256_GCM_SHA384"
        int128_t var_1688_1 = v0_46
        char const* const var_1678_1 = "ARIA-256/GCM"
        char const* const var_1670_1 = "AEAD"
        int128_t var_1668
        __builtin_memcpy(&var_1668, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_107
        int128_t v0_106
        x0_107, v0_106 = Botan::TLS::Ciphersuite::is_usable()
        char var_1658_1 = x0_107 & 1
        int16_t var_1650_1 = 0xc05c
        char const* const var_1648_1 = "ECDHE_ECDSA_WITH_ARIA_128_GCM_SHA256"
        int128_t var_1640_1 = v1_14
        char const* const var_1630_1 = "ARIA-128/GCM"
        char const* const var_1628_1 = "AEAD"
        int128_t var_1620
        __builtin_memcpy(&var_1620, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_108
        int128_t v0_107
        x0_108, v0_107 = Botan::TLS::Ciphersuite::is_usable()
        char var_1610_1 = x0_108 & 1
        int16_t var_1608_1 = 0xc05d
        char const* const var_1600_1 = "ECDHE_ECDSA_WITH_ARIA_256_GCM_SHA384"
        int128_t var_15f8_1 = v0_90
        char const* const var_15e8_1 = "ARIA-256/GCM"
        char const* const var_15e0_1 = "AEAD"
        int128_t var_15d8
        __builtin_memcpy(&var_15d8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_109
        int128_t v0_108
        x0_109, v0_108 = Botan::TLS::Ciphersuite::is_usable()
        char var_15c8_1 = x0_109 & 1
        int16_t var_15c0_1 = 0xc060
        char const* const var_15b8_1 = "ECDHE_RSA_WITH_ARIA_128_GCM_SHA256"
        int128_t var_15b0_1 = v1_15
        char const* const var_15a0_1 = "ARIA-128/GCM"
        char const* const var_1598_1 = "AEAD"
        int128_t var_1590
        __builtin_memcpy(&var_1590, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_110
        int128_t v0_109
        x0_110, v0_109 = Botan::TLS::Ciphersuite::is_usable()
        char var_1580_1 = x0_110 & 1
        int16_t var_1578_1 = 0xc061
        char const* const var_1570_1 = "ECDHE_RSA_WITH_ARIA_256_GCM_SHA384"
        int128_t var_1568_1 = v0_92
        char const* const var_1558_1 = "ARIA-256/GCM"
        char const* const var_1550_1 = "AEAD"
        int128_t var_1548
        __builtin_memcpy(&var_1548, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_111
        int128_t v0_110
        x0_111, v0_110 = Botan::TLS::Ciphersuite::is_usable()
        char var_1538_1 = x0_111 & 1
        int16_t var_1530_1 = 0xc06a
        char const* const var_1528_1 = "PSK_WITH_ARIA_128_GCM_SHA256"
        int128_t var_1520_1 = v0_47
        char const* const var_1510_1 = "ARIA-128/GCM"
        char const* const var_1508_1 = "AEAD"
        int128_t var_1500
        __builtin_memcpy(&var_1500, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_112
        int128_t v0_111
        x0_112, v0_111 = Botan::TLS::Ciphersuite::is_usable()
        char var_14f0_1 = x0_112 & 1
        int16_t var_14e8_1 = 0xc06b
        char const* const var_14e0_1 = "PSK_WITH_ARIA_256_GCM_SHA384"
        int128_t var_14d8_1 = v0_48
        char const* const var_14c8_1 = "ARIA-256/GCM"
        char const* const var_14c0_1 = "AEAD"
        int128_t var_14b8
        __builtin_memcpy(&var_14b8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_113
        int128_t v0_112
        x0_113, v0_112 = Botan::TLS::Ciphersuite::is_usable()
        char var_14a8_1 = x0_113 & 1
        int16_t var_14a0_1 = 0xc06c
        char const* const var_1498_1 = "DHE_PSK_WITH_ARIA_128_GCM_SHA256"
        int128_t var_1490_1 = v0_49
        char const* const var_1480_1 = "ARIA-128/GCM"
        char const* const var_1478_1 = "AEAD"
        int128_t var_1470
        __builtin_memcpy(&var_1470, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_114
        int128_t v0_113
        x0_114, v0_113 = Botan::TLS::Ciphersuite::is_usable()
        char var_1460_1 = x0_114 & 1
        int16_t var_1458_1 = 0xc06d
        char const* const var_1450_1 = "DHE_PSK_WITH_ARIA_256_GCM_SHA384"
        int128_t var_1448_1 = v0_50
        char const* const var_1438_1 = "ARIA-256/GCM"
        char const* const var_1430_1 = "AEAD"
        int128_t var_1428
        __builtin_memcpy(&var_1428, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_115
        int128_t v0_114
        x0_115, v0_114 = Botan::TLS::Ciphersuite::is_usable()
        char var_1418_1 = x0_115 & 1
        int16_t var_1410_1 = 0xc072
        char const* const var_1408_1 = "ECDHE_ECDSA_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_1400_1 = v1_12
        char const* const var_13f0_1 = "Camellia-128"
        char const* const var_13e8_1 = "SHA-256"
        int128_t var_13e0
        __builtin_memcpy(&var_13e0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_116
        int128_t v0_115
        x0_116, v0_115 = Botan::TLS::Ciphersuite::is_usable()
        char var_13d0_1 = x0_116 & 1
        int16_t var_13c8_1 = 0xc073
        char const* const var_13c0_1 = "ECDHE_ECDSA_WITH_CAMELLIA_256_CBC_SHA384"
        int128_t var_13b8_1 = v0_86
        char const* const var_13a8_1 = "Camellia-256"
        char const* const var_13a0_1 = "SHA-384"
        int128_t var_1398
        __builtin_memcpy(&var_1398, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_117
        int128_t v0_116
        x0_117, v0_116 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_1380_1 = 0xc076
        char var_1388_1 = x0_117 & 1
        char const* const var_1378_1 = "ECDHE_RSA_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_1370_1 = v1_13
        char const* const var_1360_1 = "Camellia-128"
        char const* const var_1358_1 = "SHA-256"
        int128_t var_1350
        __builtin_memcpy(&var_1350, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_118
        int128_t v0_117
        x0_118, v0_117 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_1338_1 = 0xc077
        char var_1340_1 = x0_118 & 1
        char const* const var_1330_1 = "ECDHE_RSA_WITH_CAMELLIA_256_CBC_SHA384"
        int128_t var_1328_1 = v0_88
        char const* const var_1318_1 = "Camellia-256"
        char const* const var_1310_1 = "SHA-384"
        int128_t var_1308
        __builtin_memcpy(&var_1308, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_119
        int128_t v0_118
        x0_119, v0_118 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_12f0_1 = 0xc07a
        char var_12f8_1 = x0_119 & 1
        char const* const var_12e8_1 = "RSA_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_12e0_1 = v1_3
        char const* const var_12d0_1 = "Camellia-128/GCM"
        char const* const var_12c8_1 = "AEAD"
        int128_t var_12c0
        __builtin_memcpy(&var_12c0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_120
        int128_t v0_119
        x0_120, v0_119 = Botan::TLS::Ciphersuite::is_usable()
        char var_12b0_1 = x0_120 & 1
        int16_t var_12a8_1 = 0xc07b
        char const* const var_12a0_1 = "RSA_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_1298_1 = v1_4
        char const* const var_1288_1 = "Camellia-256/GCM"
        char const* const var_1280_1 = "AEAD"
        int128_t var_1278
        __builtin_memcpy(&var_1278, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_121
        int128_t v0_120
        x0_121, v0_120 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_1260_1 = 0xc07c
        char var_1268_1 = x0_121 & 1
        char const* const var_1258_1 = "DHE_RSA_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_1250_1 = v0_41
        char const* const var_1240_1 = "Camellia-128/GCM"
        char const* const var_1238_1 = "AEAD"
        int128_t var_1230
        __builtin_memcpy(&var_1230, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_122
        int128_t v0_121
        x0_122, v0_121 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_1218_1 = 0xc07d
        char var_1220_1 = x0_122 & 1
        char const* const var_1210_1 = "DHE_RSA_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_1208_1 = v0_42
        char const* const var_11f8_1 = "Camellia-256/GCM"
        char const* const var_11f0_1 = "AEAD"
        int128_t var_11e8
        __builtin_memcpy(&var_11e8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_123
        int128_t v0_122
        x0_123, v0_122 = Botan::TLS::Ciphersuite::is_usable()
        v0_122.d = 1
        v0_122:4.d = 1
        v0_122:8.d = 1
        v0_122:0xc.d = 1
        int16_t var_11d0_1 = 0xc080
        char var_11d8_1 = x0_123 & 1
        char const* const var_11c8_1 = "DHE_DSS_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_11c0_1 = v0_122
        char const* const var_11b0_1 = "Camellia-128/GCM"
        char const* const var_11a8_1 = "AEAD"
        int128_t var_11a0
        __builtin_memcpy(&var_11a0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_124
        int128_t v0_123
        x0_124, v0_123 = Botan::TLS::Ciphersuite::is_usable()
        char var_1190_1 = x0_124 & 1
        int16_t var_1188_1 = 0xc081
        char const* const var_1180_1 = "DHE_DSS_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_1178_1 = v0_44
        char const* const var_1168_1 = "Camellia-256/GCM"
        char const* const var_1160_1 = "AEAD"
        int128_t var_1158
        __builtin_memcpy(&var_1158, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_125
        int128_t v0_124
        x0_125, v0_124 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_1140_1 = 0xc084
        char var_1148_1 = x0_125 & 1
        char const* const var_1138_1 = "DH_anon_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_1130_1 = v0_45
        char const* const var_1120_1 = "Camellia-128/GCM"
        char const* const var_1118_1 = "AEAD"
        int128_t var_1110
        __builtin_memcpy(&var_1110, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_126
        int128_t v0_125
        x0_126, v0_125 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_10f8_1 = 0xc085
        char var_1100_1 = x0_126 & 1
        char const* const var_10f0_1 = "DH_anon_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_10e8_1 = v0_46
        char const* const var_10d8_1 = "Camellia-256/GCM"
        char const* const var_10d0_1 = "AEAD"
        int128_t var_10c8
        __builtin_memcpy(&var_10c8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_127
        int128_t v0_126
        x0_127, v0_126 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_10b0_1 = 0xc086
        char var_10b8_1 = x0_127 & 1
        char const* const var_10a8_1 = "ECDHE_ECDSA_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_10a0_1 = v1_14
        char const* const var_1090_1 = "Camellia-128/GCM"
        char const* const var_1088_1 = "AEAD"
        int128_t var_1080
        __builtin_memcpy(&var_1080, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_128
        int128_t v0_127
        x0_128, v0_127 = Botan::TLS::Ciphersuite::is_usable()
        char var_1070_1 = x0_128 & 1
        int16_t var_1068_1 = 0xc087
        char const* const var_1060_1 = "ECDHE_ECDSA_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_1058_1 = v0_90
        char const* const var_1048_1 = "Camellia-256/GCM"
        char const* const var_1040_1 = "AEAD"
        int128_t var_1038
        __builtin_memcpy(&var_1038, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_129
        int128_t v0_128
        x0_129, v0_128 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_1020_1 = 0xc08a
        char var_1028_1 = x0_129 & 1
        char const* const var_1018_1 = "ECDHE_RSA_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_1010_1 = v1_15
        char const* const var_1000_1 = "Camellia-128/GCM"
        char const* const var_ff8_1 = "AEAD"
        int128_t var_ff0
        __builtin_memcpy(&var_ff0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_130
        int128_t v0_129
        x0_130, v0_129 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_fd8_1 = 0xc08b
        char var_fe0_1 = x0_130 & 1
        char const* const var_fd0_1 = "ECDHE_RSA_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_fc8_1 = v0_92
        char const* const var_fb8_1 = "Camellia-256/GCM"
        char const* const var_fb0_1 = "AEAD"
        int128_t var_fa8
        __builtin_memcpy(&var_fa8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_131
        int128_t v0_130
        x0_131, v0_130 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_f90_1 = 0xc08e
        char var_f98_1 = x0_131 & 1
        char const* const var_f88_1 = "PSK_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_f80_1 = v0_47
        char const* const var_f70_1 = "Camellia-128/GCM"
        char const* const var_f68_1 = "AEAD"
        int128_t var_f60
        __builtin_memcpy(&var_f60, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_132
        int128_t v0_131
        x0_132, v0_131 = Botan::TLS::Ciphersuite::is_usable()
        char var_f50_1 = x0_132 & 1
        int16_t var_f48_1 = 0xc08f
        char const* const var_f40_1 = "PSK_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_f38_1 = v0_48
        char const* const var_f28_1 = "Camellia-256/GCM"
        char const* const var_f20_1 = "AEAD"
        int128_t var_f18
        __builtin_memcpy(&var_f18, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_133
        int128_t v0_132
        x0_133, v0_132 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_f00_1 = 0xc090
        char var_f08_1 = x0_133 & 1
        char const* const var_ef8_1 = "DHE_PSK_WITH_CAMELLIA_128_GCM_SHA256"
        int128_t var_ef0_1 = v0_49
        char const* const var_ee0_1 = "Camellia-128/GCM"
        char const* const var_ed8_1 = "AEAD"
        int128_t var_ed0
        __builtin_memcpy(&var_ed0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_134
        int128_t v0_133
        x0_134, v0_133 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_eb8_1 = 0xc091
        char var_ec0_1 = x0_134 & 1
        char const* const var_eb0_1 = "DHE_PSK_WITH_CAMELLIA_256_GCM_SHA384"
        int128_t var_ea8_1 = v0_50
        char const* const var_e98_1 = "Camellia-256/GCM"
        char const* const var_e90_1 = "AEAD"
        int128_t var_e88
        __builtin_memcpy(&var_e88, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_135
        int128_t v0_134
        x0_135, v0_134 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_e70_1 = 0xc094
        char var_e78_1 = x0_135 & 1
        char const* const var_e68_1 = "PSK_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_e60_1 = v0_51
        char const* const var_e50_1 = "Camellia-128"
        char const* const var_e48_1 = "SHA-256"
        int128_t var_e40
        __builtin_memcpy(&var_e40, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_136
        int128_t v0_135
        x0_136, v0_135 = Botan::TLS::Ciphersuite::is_usable()
        char var_e30_1 = x0_136 & 1
        int16_t var_e28_1 = 0xc095
        char const* const var_e20_1 = "PSK_WITH_CAMELLIA_256_CBC_SHA384"
        int128_t var_e18_1 = v1_6
        char const* const var_e08_1 = "Camellia-256"
        char const* const var_e00_1 = "SHA-384"
        int128_t var_df8
        __builtin_memcpy(&var_df8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_137
        int128_t v0_136
        x0_137, v0_136 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_de0_1 = 0xc096
        char var_de8_1 = x0_137 & 1
        char const* const var_dd8_1 = "DHE_PSK_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_dd0_1 = v0_53
        char const* const var_dc0_1 = "Camellia-128"
        char const* const var_db8_1 = "SHA-256"
        int128_t var_db0
        __builtin_memcpy(&var_db0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_138
        int128_t v0_137
        x0_138, v0_137 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_d98_1 = 0xc097
        char var_da0_1 = x0_138 & 1
        char const* const var_d90_1 = "DHE_PSK_WITH_CAMELLIA_256_CBC_SHA384"
        int128_t var_d88_1 = v0_54
        char const* const var_d78_1 = "Camellia-256"
        char const* const var_d70_1 = "SHA-384"
        int128_t var_d68
        __builtin_memcpy(&var_d68, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_139
        int128_t v0_138
        x0_139, v0_138 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_d50_1 = 0xc09a
        char var_d58_1 = x0_139 & 1
        char const* const var_d48_1 = "ECDHE_PSK_WITH_CAMELLIA_128_CBC_SHA256"
        int128_t var_d40_1 = v0_96
        char const* const var_d30_1 = "Camellia-128"
        char const* const var_d28_1 = "SHA-256"
        int128_t var_d20
        __builtin_memcpy(&var_d20, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_140
        int128_t v0_139
        x0_140, v0_139 = Botan::TLS::Ciphersuite::is_usable()
        char var_d10_1 = x0_140 & 1
        int16_t var_d08_1 = 0xc09b
        char const* const var_d00_1 = "ECDHE_PSK_WITH_CAMELLIA_256_CBC_SHA384"
        int128_t var_cf8_1 = v1_17
        char const* const var_ce8_1 = "Camellia-256"
        char const* const var_ce0_1 = "SHA-384"
        int128_t var_cd8
        __builtin_memcpy(&var_cd8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_141
        int128_t v0_140
        x0_141, v0_140 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_cc0_1 = 0xc09c
        char var_cc8_1 = x0_141 & 1
        char const* const var_cb8_1 = "RSA_WITH_AES_128_CCM"
        int128_t var_cb0_1 = v1_3
        char const* const var_ca0_1 = "AES-128/CCM"
        char const* const var_c98_1 = "AEAD"
        int128_t var_c90
        __builtin_memcpy(&var_c90, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_142
        int128_t v0_141
        x0_142, v0_141 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_c78_1 = 0xc09d
        char var_c80_1 = x0_142 & 1
        char const* const var_c70_1 = "RSA_WITH_AES_256_CCM"
        int128_t var_c68_1 = v1_3
        char const* const var_c58_1 = "AES-256/CCM"
        char const* const var_c50_1 = "AEAD"
        int128_t var_c48
        __builtin_memcpy(&var_c48, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_143
        int128_t v0_142
        x0_143, v0_142 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_c30_1 = 0xc09e
        char var_c38_1 = x0_143 & 1
        char const* const var_c28_1 = "DHE_RSA_WITH_AES_128_CCM"
        int128_t var_c20_1 = v0_41
        char const* const var_c10_1 = "AES-128/CCM"
        char const* const var_c08_1 = "AEAD"
        int128_t var_c00
        __builtin_memcpy(&var_c00, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_144
        int128_t v0_143
        x0_144, v0_143 = Botan::TLS::Ciphersuite::is_usable()
        char var_bf0_1 = x0_144 & 1
        int16_t var_be8_1 = 0xc09f
        char const* const var_be0_1 = "DHE_RSA_WITH_AES_256_CCM"
        int128_t var_bd8_1 = v0_41
        char const* const var_bc8_1 = "AES-256/CCM"
        char const* const var_bc0_1 = "AEAD"
        int128_t var_bb8
        __builtin_memcpy(&var_bb8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_145
        int128_t v0_144
        x0_145, v0_144 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_ba0_1 = 0xc0a0
        char var_ba8_1 = x0_145 & 1
        char const* const var_b98_1 = "RSA_WITH_AES_128_CCM_8"
        int128_t var_b90_1 = v1_3
        char const* const var_b80_1 = "AES-128/CCM(8)"
        char const* const var_b78_1 = "AEAD"
        int128_t var_b70
        __builtin_memcpy(&var_b70, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_146
        int128_t v0_145
        x0_146, v0_145 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_b58_1 = 0xc0a1
        char var_b60_1 = x0_146 & 1
        char const* const var_b50_1 = "RSA_WITH_AES_256_CCM_8"
        int128_t var_b48_1 = v1_3
        char const* const var_b38_1 = "AES-256/CCM(8)"
        char const* const var_b30_1 = "AEAD"
        int128_t var_b28
        __builtin_memcpy(&var_b28, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_147
        int128_t v0_146
        x0_147, v0_146 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_b10_1 = 0xc0a2
        char var_b18_1 = x0_147 & 1
        char const* const var_b08_1 = "DHE_RSA_WITH_AES_128_CCM_8"
        int128_t var_b00_1 = v0_41
        char const* const var_af0_1 = "AES-128/CCM(8)"
        char const* const var_ae8_1 = "AEAD"
        int128_t var_ae0
        __builtin_memcpy(&var_ae0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_148
        int128_t v0_147
        x0_148, v0_147 = Botan::TLS::Ciphersuite::is_usable()
        char var_ad0_1 = x0_148 & 1
        int16_t var_ac8_1 = 0xc0a3
        char const* const var_ac0_1 = "DHE_RSA_WITH_AES_256_CCM_8"
        int128_t var_ab8_1 = v0_41
        char const* const var_aa8_1 = "AES-256/CCM(8)"
        char const* const var_aa0_1 = "AEAD"
        int128_t var_a98
        __builtin_memcpy(&var_a98, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_149
        int128_t v0_148
        x0_149, v0_148 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_a80_1 = 0xc0a4
        char var_a88_1 = x0_149 & 1
        char const* const var_a78_1 = "PSK_WITH_AES_128_CCM"
        int128_t var_a70_1 = v0_47
        char const* const var_a60_1 = "AES-128/CCM"
        char const* const var_a58_1 = "AEAD"
        int128_t var_a50
        __builtin_memcpy(&var_a50, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_150
        int128_t v0_149
        x0_150, v0_149 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_a38_1 = 0xc0a5
        char var_a40_1 = x0_150 & 1
        char const* const var_a30_1 = "PSK_WITH_AES_256_CCM"
        int128_t var_a28_1 = v0_47
        char const* const var_a18_1 = "AES-256/CCM"
        char const* const var_a10_1 = "AEAD"
        int128_t var_a08
        __builtin_memcpy(&var_a08, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_151
        int128_t v0_150
        x0_151, v0_150 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_9f0_1 = 0xc0a6
        char var_9f8_1 = x0_151 & 1
        char const* const var_9e8_1 = "DHE_PSK_WITH_AES_128_CCM"
        int128_t var_9e0_1 = v0_49
        char const* const var_9d0_1 = "AES-128/CCM"
        char const* const var_9c8_1 = "AEAD"
        int128_t var_9c0
        __builtin_memcpy(&var_9c0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_152
        int128_t v0_151
        x0_152, v0_151 = Botan::TLS::Ciphersuite::is_usable()
        char var_9b0_1 = x0_152 & 1
        int16_t var_9a8_1 = 0xc0a7
        char const* const var_9a0_1 = "DHE_PSK_WITH_AES_256_CCM"
        int128_t var_998_1 = v0_49
        char const* const var_988_1 = "AES-256/CCM"
        char const* const var_980_1 = "AEAD"
        int128_t var_978
        __builtin_memcpy(&var_978, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_153
        int128_t v0_152
        x0_153, v0_152 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_960_1 = 0xc0a8
        char var_968_1 = x0_153 & 1
        char const* const var_958_1 = "PSK_WITH_AES_128_CCM_8"
        int128_t var_950_1 = v0_47
        char const* const var_940_1 = "AES-128/CCM(8)"
        char const* const var_938_1 = "AEAD"
        int128_t var_930
        __builtin_memcpy(&var_930, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_154
        int128_t v0_153
        x0_154, v0_153 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_918_1 = 0xc0a9
        char var_920_1 = x0_154 & 1
        char const* const var_910_1 = "PSK_WITH_AES_256_CCM_8"
        int128_t var_908_1 = v0_47
        char const* const var_8f8_1 = "AES-256/CCM(8)"
        char const* const var_8f0_1 = "AEAD"
        int128_t var_8e8
        __builtin_memcpy(&var_8e8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_155
        int128_t v0_154
        x0_155, v0_154 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_8d0_1 = 0xc0aa
        char var_8d8_1 = x0_155 & 1
        char const* const var_8c8_1 = "PSK_DHE_WITH_AES_128_CCM_8"
        int128_t var_8c0_1 = v0_49
        char const* const var_8b0_1 = "AES-128/CCM(8)"
        char const* const var_8a8_1 = "AEAD"
        int128_t var_8a0
        __builtin_memcpy(&var_8a0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_156
        int128_t v0_155
        x0_156, v0_155 = Botan::TLS::Ciphersuite::is_usable()
        char var_890_1 = x0_156 & 1
        int16_t var_888_1 = 0xc0ab
        char const* const var_880_1 = "PSK_DHE_WITH_AES_256_CCM_8"
        int128_t var_878_1 = v0_49
        char const* const var_868_1 = "AES-256/CCM(8)"
        char const* const var_860_1 = "AEAD"
        int128_t var_858
        __builtin_memcpy(&var_858, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_157
        int128_t v0_156
        x0_157, v0_156 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_840_1 = 0xc0ac
        char var_848_1 = x0_157 & 1
        char const* const var_838_1 = "ECDHE_ECDSA_WITH_AES_128_CCM"
        int128_t var_830_1 = v1_14
        char const* const var_820_1 = "AES-128/CCM"
        char const* const var_818_1 = "AEAD"
        int128_t var_810
        __builtin_memcpy(&var_810, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_158
        int128_t v0_157
        x0_158, v0_157 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_7f8_1 = 0xc0ad
        char var_800_1 = x0_158 & 1
        char const* const var_7f0_1 = "ECDHE_ECDSA_WITH_AES_256_CCM"
        int128_t var_7e8_1 = v1_14
        char const* const var_7d8_1 = "AES-256/CCM"
        char const* const var_7d0_1 = "AEAD"
        int128_t var_7c8
        __builtin_memcpy(&var_7c8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_159
        int128_t v0_158
        x0_159, v0_158 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_7b0_1 = 0xc0ae
        char var_7b8_1 = x0_159 & 1
        char const* const var_7a8_1 = "ECDHE_ECDSA_WITH_AES_128_CCM_8"
        int128_t var_7a0_1 = v1_14
        char const* const var_790_1 = "AES-128/CCM(8)"
        char const* const var_788_1 = "AEAD"
        int128_t var_780
        __builtin_memcpy(&var_780, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_160
        int128_t v0_159
        x0_160, v0_159 = Botan::TLS::Ciphersuite::is_usable()
        char var_770_1 = x0_160 & 1
        int16_t var_768_1 = 0xc0af
        char const* const var_760_1 = "ECDHE_ECDSA_WITH_AES_256_CCM_8"
        int128_t var_758_1 = v1_14
        char const* const var_748_1 = "AES-256/CCM(8)"
        char const* const var_740_1 = "AEAD"
        int128_t var_738
        __builtin_memcpy(&var_738, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_161
        int128_t v0_160
        x0_161, v0_160 = Botan::TLS::Ciphersuite::is_usable()
        v0_160 = data_71c8c0
        int16_t var_720_1 = 0xcca8
        char var_728_1 = x0_161 & 1
        char const* const var_718_1 = "ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256"
        int128_t var_710_1 = v0_160
        char const* const var_700_1 = "ChaCha20Poly1305"
        char const* const var_6f8_1 = "AEAD"
        int128_t var_6f0
        __builtin_memcpy(&var_6f0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_162
        int128_t v0_161
        int128_t v1_18
        x0_162, v0_161, v1_18 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_6d8_1 = 0xcca9
        char var_6e0_1 = x0_162 & 1
        v1_18 = data_71c720
        char const* const var_6b8_1 = "ChaCha20Poly1305"
        char const* const var_6d0_1 = "ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256"
        char const* const var_6b0_1 = "AEAD"
        int128_t var_6a8
        __builtin_memcpy(&var_6a8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_6c8_1 = v1_18
        char x0_163
        int128_t v0_162
        x0_163, v0_162 = Botan::TLS::Ciphersuite::is_usable()
        v0_162 = data_71d1b0
        int16_t var_690_1 = 0xccaa
        char var_698_1 = x0_163 & 1
        char const* const var_688_1 = "DHE_RSA_WITH_CHACHA20_POLY1305_SHA256"
        int128_t var_680_1 = v0_162
        char const* const var_670_1 = "ChaCha20Poly1305"
        char const* const var_668_1 = "AEAD"
        int128_t var_660
        __builtin_memcpy(&var_660, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_164
        int128_t v0_163
        int128_t v1_19
        x0_164, v0_163, v1_19 = Botan::TLS::Ciphersuite::is_usable()
        char var_650_1 = x0_164 & 1
        v1_19 = data_71cd30
        int16_t var_648_1 = 0xccab
        char const* const var_628_1 = "ChaCha20Poly1305"
        char const* const var_640_1 = "PSK_WITH_CHACHA20_POLY1305_SHA256"
        char const* const var_620_1 = "AEAD"
        int128_t var_618
        __builtin_memcpy(&var_618, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_638_1 = v1_19
        char x0_165
        int128_t v0_164
        x0_165, v0_164 = Botan::TLS::Ciphersuite::is_usable()
        v0_164 = data_71ca20
        int16_t var_600_1 = 0xccac
        char var_608_1 = x0_165 & 1
        char const* const var_5f8_1 = "ECDHE_PSK_WITH_CHACHA20_POLY1305_SHA256"
        int128_t var_5f0_1 = v0_164
        char const* const var_5e0_1 = "ChaCha20Poly1305"
        char const* const var_5d8_1 = "AEAD"
        int128_t var_5d0
        __builtin_memcpy(&var_5d0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_166
        int128_t v0_165
        int128_t v1_20
        x0_166, v0_165, v1_20 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_5b8_1 = 0xccad
        char var_5c0_1 = x0_166 & 1
        v1_20 = data_71b980
        char const* const var_598_1 = "ChaCha20Poly1305"
        char const* const var_5b0_1 = "DHE_PSK_WITH_CHACHA20_POLY1305_SHA256"
        char const* const var_590_1 = "AEAD"
        int128_t var_588
        __builtin_memcpy(&var_588, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_5a8_1 = v1_20
        char x0_167
        int128_t v0_166
        x0_167, v0_166 = Botan::TLS::Ciphersuite::is_usable()
        v0_166 = data_71aca0
        int16_t var_570_1 = 0xd001
        char var_578_1 = x0_167 & 1
        char const* const var_568_1 = "ECDHE_PSK_WITH_AES_128_GCM_SHA256"
        int128_t var_560_1 = v0_166
        char const* const var_550_1 = "AES-128/GCM"
        char const* const var_548_1 = "AEAD"
        int128_t var_540
        __builtin_memcpy(&var_540, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_168
        int128_t v0_167
        int128_t v1_21
        x0_168, v0_167, v1_21 = Botan::TLS::Ciphersuite::is_usable()
        char var_530_1 = x0_168 & 1
        v0_167 = data_71b610
        int16_t var_528_1 = 0xd002
        char const* const var_508_1 = "AES-256/GCM"
        char const* const var_520_1 = "ECDHE_PSK_WITH_AES_256_GCM_SHA384"
        char const* const var_500_1 = "AEAD"
        int128_t var_4f8
        __builtin_memcpy(&var_4f8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        int128_t var_518_1 = v0_167
        char x0_169
        int128_t v0_168
        x0_169, v0_168 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_4e0_1 = 0xd003
        char var_4e8_1 = x0_169 & 1
        char const* const var_4d8_1 = "ECDHE_PSK_WITH_AES_128_CCM_8_SHA256"
        int128_t var_4d0_1 = v0_166
        char const* const var_4c0_1 = "AES-128/CCM(8)"
        char const* const var_4b8_1 = "AEAD"
        int128_t var_4b0
        __builtin_memcpy(&var_4b0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_170
        int128_t v0_169
        x0_170, v0_169 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_498_1 = 0xd005
        char var_4a0_1 = x0_170 & 1
        char const* const var_490_1 = "ECDHE_PSK_WITH_AES_128_CCM_SHA256"
        int128_t var_488_1 = v0_166
        char const* const var_478_1 = "AES-128/CCM"
        char const* const var_470_1 = "AEAD"
        int128_t var_468
        __builtin_memcpy(&var_468, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_171
        int128_t v0_170
        x0_171, v0_170 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_450_1 = 0xffc0
        char var_458_1 = x0_171 & 1
        char const* const var_448_1 = "DHE_RSA_WITH_AES_128_OCB_SHA256"
        int128_t var_440_1 = v0_162
        char const* const var_430_1 = "AES-128/OCB(12)"
        char const* const var_428_1 = "AEAD"
        int128_t var_420
        __builtin_memcpy(&var_420, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_172
        int128_t v0_171
        x0_172, v0_171 = Botan::TLS::Ciphersuite::is_usable()
        char var_410_1 = x0_172 & 1
        int16_t var_408_1 = 0xffc1
        char const* const var_400_1 = "DHE_RSA_WITH_AES_256_OCB_SHA256"
        int128_t var_3f8_1 = v0_162
        char const* const var_3e8_1 = "AES-256/OCB(12)"
        char const* const var_3e0_1 = "AEAD"
        int128_t var_3d8
        __builtin_memcpy(&var_3d8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_173
        int128_t v0_172
        x0_173, v0_172 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_3c0_1 = 0xffc2
        char var_3c8_1 = x0_173 & 1
        char const* const var_3b8_1 = "ECDHE_RSA_WITH_AES_128_OCB_SHA256"
        int128_t var_3b0_1 = v0_160
        char const* const var_3a0_1 = "AES-128/OCB(12)"
        char const* const var_398_1 = "AEAD"
        int128_t var_390
        __builtin_memcpy(&var_390, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_174
        int128_t v0_173
        x0_174, v0_173 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_378_1 = 0xffc3
        char var_380_1 = x0_174 & 1
        char const* const var_370_1 = "ECDHE_RSA_WITH_AES_256_OCB_SHA256"
        int128_t var_368_1 = v0_160
        char const* const var_358_1 = "AES-256/OCB(12)"
        char const* const var_350_1 = "AEAD"
        int128_t var_348
        __builtin_memcpy(&var_348, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_175
        int128_t v0_174
        x0_175, v0_174 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_330_1 = 0xffc4
        char var_338_1 = x0_175 & 1
        char const* const var_328_1 = "ECDHE_ECDSA_WITH_AES_128_OCB_SHA256"
        int128_t var_320_1 = v1_18
        char const* const var_310_1 = "AES-128/OCB(12)"
        char const* const var_308_1 = "AEAD"
        int128_t var_300
        __builtin_memcpy(&var_300, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_176
        int128_t v0_175
        x0_176, v0_175 = Botan::TLS::Ciphersuite::is_usable()
        char var_2f0_1 = x0_176 & 1
        int16_t var_2e8_1 = 0xffc5
        char const* const var_2e0_1 = "ECDHE_ECDSA_WITH_AES_256_OCB_SHA256"
        int128_t var_2d8_1 = v1_18
        char const* const var_2c8_1 = "AES-256/OCB(12)"
        char const* const var_2c0_1 = "AEAD"
        int128_t var_2b8
        __builtin_memcpy(&var_2b8, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_177
        int128_t v0_176
        x0_177, v0_176 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_2a0_1 = 0xffc6
        char var_2a8_1 = x0_177 & 1
        char const* const var_298_1 = "PSK_WITH_AES_128_OCB_SHA256"
        int128_t var_290_1 = v1_19
        char const* const var_280_1 = "AES-128/OCB(12)"
        char const* const var_278_1 = "AEAD"
        int128_t var_270
        __builtin_memcpy(&var_270, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_178
        int128_t v0_177
        x0_178, v0_177 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_258_1 = 0xffc7
        char var_260_1 = x0_178 & 1
        char const* const var_250_1 = "PSK_WITH_AES_256_OCB_SHA256"
        int128_t var_248_1 = v1_19
        char const* const var_238_1 = "AES-256/OCB(12)"
        char const* const var_230_1 = "AEAD"
        int128_t var_228
        __builtin_memcpy(&var_228, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_179
        int128_t v0_178
        x0_179, v0_178 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_210_1 = 0xffc8
        char var_218_1 = x0_179 & 1
        char const* const var_208_1 = "DHE_PSK_WITH_AES_128_OCB_SHA256"
        int128_t var_200_1 = v1_20
        char const* const var_1f0_1 = "AES-128/OCB(12)"
        char const* const var_1e8_1 = "AEAD"
        int128_t var_1e0
        __builtin_memcpy(&var_1e0, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_180
        int128_t v0_179
        x0_180, v0_179 = Botan::TLS::Ciphersuite::is_usable()
        char var_1d0_1 = x0_180 & 1
        int16_t var_1c8_1 = 0xffc9
        char const* const var_1c0_1 = "DHE_PSK_WITH_AES_256_OCB_SHA256"
        int128_t var_1b8_1 = v1_20
        char const* const var_1a8_1 = "AES-256/OCB(12)"
        char const* const var_1a0_1 = "AEAD"
        int128_t var_198
        __builtin_memcpy(&var_198, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_181
        int128_t v0_180
        x0_181, v0_180 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_180_1 = 0xffca
        char var_188_1 = x0_181 & 1
        char const* const var_178_1 = "ECDHE_PSK_WITH_AES_128_OCB_SHA256"
        int128_t var_170_1 = v0_164
        char const* const var_160_1 = "AES-128/OCB(12)"
        char const* const var_158_1 = "AEAD"
        int128_t var_150
        __builtin_memcpy(&var_150, 
            "\x10\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_182
        int128_t v0_181
        x0_182, v0_181 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_138_1 = 0xffcb
        char var_140_1 = x0_182 & 1
        char const* const var_130_1 = "ECDHE_PSK_WITH_AES_256_OCB_SHA256"
        int128_t var_128_1 = v0_164
        char const* const var_118_1 = "AES-256/OCB(12)"
        char const* const var_110_1 = "AEAD"
        int128_t var_108
        __builtin_memcpy(&var_108, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_183
        int128_t v0_182
        x0_183, v0_182 = Botan::TLS::Ciphersuite::is_usable()
        int16_t var_f0_1 = 0xffcc
        char var_f8_1 = x0_183 & 1
        char const* const var_e8_1 = "CECPQ1_RSA_WITH_AES_256_OCB_SHA256"
        int128_t var_e0_1 = v1_7
        char const* const var_d0_1 = "AES-256/OCB(12)"
        char const* const var_c8_1 = "AEAD"
        int128_t var_c0
        __builtin_memcpy(&var_c0, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char x0_184
        int128_t v0_183
        x0_184, v0_183 = Botan::TLS::Ciphersuite::is_usable()
        char var_b0_1 = x0_184 & 1
        int16_t var_a8_1 = 0xffcd
        char const* const var_a0_1 = "CECPQ1_ECDSA_WITH_AES_256_OCB_SHA256"
        int128_t var_98_1 = v0_64
        char const* const var_88_1 = "AES-256/OCB(12)"
        char const* const var_80_1 = "AEAD"
        int128_t var_78
        __builtin_memcpy(&var_78, 
            "\x20\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x11)
        char var_68_1 = Botan::TLS::Ciphersuite::is_usable() & 1
        __builtin_memset(&data_23ecc48, 0, 0x18)
        int64_t x0_186 = operator new(0x3378)
        data_23ecc48 = x0_186
        data_23ecc58 = x0_186 + 0x3378
        memcpy(x0_186, &var_33d8, 0x3378)
        data_23ecc50 = x0_186 + 0x3378
        __cxa_atexit(func_e75ec4, &data_23ecc48, &data_1122730)
        __cxa_guard_release(&data_23eca18)

return &data_23ecc48
