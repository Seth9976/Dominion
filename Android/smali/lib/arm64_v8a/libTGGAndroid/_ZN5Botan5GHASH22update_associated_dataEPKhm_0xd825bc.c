// 函数: _ZN5Botan5GHASH22update_associated_dataEPKhm
// 地址: 0xd825bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x40) - *(arg1 + 0x38) != 0x10)
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_1
    uint64_t x1_2
    uint64_t x2_2
    x0_1, x1_2, x2_2 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::GHASH::add_final_block(x0_1, x1_2, x2_2) __tailcall

int64_t entry_x2
*(arg1 + 0x98) += entry_x2
return Botan::GHASH::ghash_update(arg1, &arg1[0x38], arg2) __tailcall
