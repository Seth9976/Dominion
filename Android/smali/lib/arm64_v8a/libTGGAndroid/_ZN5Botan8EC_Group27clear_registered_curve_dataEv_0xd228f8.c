// 函数: _ZN5Botan8EC_Group27clear_registered_curve_dataEv
// 地址: 0xd228f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::EC_Group::ec_group_data()
std::__ndk1::mutex::lock()
int64_t x21 = data_23ecf00:8
void* x23 = data_23ecf10.q
void* x22 = x23 - x21

if (x23 != x21)
    do
        int64_t* x20_2 = *(x23 - 8)
        x23 -= 0x10
        
        if (x20_2 != 0)
            int64_t x9_1
            int32_t i
            
            do
                x9_1 = __ldaxr(&x20_2[1])
                i = __stlxr(x9_1 - 1, &x20_2[1])
            while (i != 0)
            
            if (x9_1 == 0)
                (*(*x20_2 + 0x10))(x20_2)
                std::__ndk1::__shared_weak_count::__release_weak()
    while (x23 != x21)

data_23ecf10.q = x21
std::__ndk1::mutex::unlock()
return x22 s>> 4
