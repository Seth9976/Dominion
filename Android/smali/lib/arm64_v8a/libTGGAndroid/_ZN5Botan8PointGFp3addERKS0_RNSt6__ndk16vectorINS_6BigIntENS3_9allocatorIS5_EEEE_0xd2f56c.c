// 函数: _ZN5Botan8PointGFp3addERKS0_RNSt6__ndk16vectorINS_6BigIntENS3_9allocatorIS5_EEEE
// 地址: 0xd2f56c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *arg1

if (x0 != *arg2)
    Botan::BigInt* x0_1 = (*(*x0 + 0x10))()
    int64_t* x8_3 = *arg2
    (*(*x8_3 + 0x10))(x8_3)
    
    if ((Botan::BigInt::is_equal(x0_1) & 1) == 0)
        return Botan::PointGFp::operator-=(Botan::assertion_failure("m_curve == other.m_curve", 
            &data_793a18, "add", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 
            0x3a43)) __tailcall
    
    Botan::BigInt* x0_7 = (*(**arg1 + 0x18))()
    int64_t* x8_6 = *arg2
    (*(*x8_6 + 0x18))(x8_6)
    
    if ((Botan::BigInt::is_equal(x0_7) & 1) == 0)
        return Botan::PointGFp::operator-=(Botan::assertion_failure("m_curve == other.m_curve", 
            &data_793a18, "add", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 
            0x3a43)) __tailcall
    
    Botan::BigInt* x0_13 = (*(**arg1 + 0x20))()
    int64_t* x8_9 = *arg2
    (*(*x8_9 + 0x20))(x8_9)
    
    if ((Botan::BigInt::is_equal(x0_13) & 1) == 0)
        return Botan::PointGFp::operator-=(Botan::assertion_failure("m_curve == other.m_curve", 
            &data_793a18, "add", "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 
            0x3a43)) __tailcall
    
    x0 = *arg1

std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* x0_18 =
    (*(*x0 + 0x28))()
uint64_t x1_3 = *(arg2 + 0x10)
uint64_t x3 = *(arg2 + 0x38)
uint64_t x5 = *(arg2 + 0x60)
int64_t x8_14 = (*(arg2 + 0x18) - x1_3) s>> 2
uint32_t* x9_9 = (*(arg2 + 0x40) - x3) s>> 2
std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* x10_2 =
    (*(arg2 + 0x68) - x5) s>> 2
uint32_t* x2_1

x2_1 = x8_14 u< x0_18 ? x8_14 : x0_18

uint32_t* x4

x4 = x9_9 u< x0_18 ? x9_9 : x0_18

std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >* x6

x6 = x10_2 u< x0_18 ? x10_2 : x0_18

return Botan::PointGFp::add(arg1, x1_3, x2_1, x3, x4, x5, x6) __tailcall
