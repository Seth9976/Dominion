// 函数: _ZNK5Botan24Certificate_Store_In_SQL13generate_crlsEv
// 地址: 0xcf941c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x20 = *(entry_x0 + 0x10)
Botan::X509_CRL* entry_x8
Botan::X509_CRL* x25 = entry_x8
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "SELECT certificate,reason,time FROM ", entry_x0 + 0x20)
char var_108[0x10]
int128_t* x0_1
int128_t v0
x0_1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_108)
void* x8 = x0_1[1].q
int128_t var_f0 = *x0_1
__builtin_memset(x0_1, 0, 0x18)
*(entry_x0 + 0x28)
void* x1_2

if ((zx.d(*(entry_x0 + 0x20)) & 1) != 0)
    x1_2 = *(entry_x0 + 0x30)
else
    x1_2 = entry_x0 + 0x21

int128_t* x0_3
int128_t v0_1
x0_3, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_f0, x1_2)
void* x8_2 = x0_3[1].q
int128_t var_d0 = *x0_3
__builtin_memset(x0_3, 0, 0x18)
int128_t* x0_5
int128_t v0_2
x0_5, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_d0)
void* x8_3 = x0_5[1].q
int128_t var_b0 = *x0_5
__builtin_memset(x0_5, 0, 0x18)
*(entry_x0 + 0x28)
uint64_t x1_4

if ((zx.d(*(entry_x0 + 0x20)) & 1) == 0)
    x1_4 = entry_x0 + 0x21
else
    x1_4 = *(entry_x0 + 0x30)

int128_t* x0_7
int128_t v0_3
x0_7, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_b0, x1_4)
void* x8_5 = x0_7[1].q
int128_t var_90 = *x0_7
__builtin_memset(x0_7, 0, 0x18)
int128_t* x0_9
int128_t v0_4
x0_9, v0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_90)
int64_t* x8_6 = x0_9[1].q
int128_t var_210 = *x0_9
__builtin_memset(x0_9, 0, 0x18)
*(entry_x0 + 0x28)
void* x1_6

if ((zx.d(*(entry_x0 + 0x20)) & 1) == 0)
    x1_6 = entry_x0 + 0x21
else
    x1_6 = *(entry_x0 + 0x30)

int128_t* x0_11
int128_t v0_5
x0_11, v0_5 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_210, x1_6)
void* x8_8 = x0_11[1].q
int128_t t = *x0_11
__builtin_memset(x0_11, 0, 0x18)
int128_t* x0_13
int128_t v0_6
x0_13, v0_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &t)
int64_t x8_9 = x0_13[1].q
v0_6 = *x0_13
struct tm tp
tp.tm_mon = x8_9.d
tp.tm_year = x8_9:4.d
tp.tm_sec = v0_6.d
tp.tm_min = v0_6:4.d
tp.tm_hour = v0_6:8.d
tp.tm_mday = v0_6:0xc.d
__builtin_memset(x0_13, 0, 0x18)
(**x20)(x20, &tp)

if ((zx.d(tp.tm_sec.b) & 1) == 0)
    if ((zx.d(t.b) & 1) != 0)
        goto label_cf9c88
    
    goto label_cf95d4

void* x0_68
x0_68.d = tp.tm_mon
x0_68:4.d = tp.tm_year
operator delete(x0_68)

if ((zx.d(t.b) & 1) != 0)
label_cf9c88:
    operator delete(x8_8)
    
    if ((zx.d(var_210.b) & 1) == 0)
        goto label_cf95dc
    
    goto label_cf9c98

label_cf95d4:

if ((zx.d(var_210.b) & 1) == 0)
label_cf95dc:
    
    if ((zx.d(var_90.b) & 1) != 0)
        goto label_cf9ca8
    
    goto label_cf95e4

label_cf9c98:
operator delete(x8_6)

if ((zx.d(var_90.b) & 1) != 0)
label_cf9ca8:
    operator delete(x8_5)
    
    if ((zx.d(var_b0.b) & 1) == 0)
        goto label_cf95ec
    
    goto label_cf9cb8

label_cf95e4:

if ((zx.d(var_b0.b) & 1) == 0)
label_cf95ec:
    
    if ((zx.d(var_d0.b) & 1) != 0)
        goto label_cf9cc8
    
    goto label_cf95f4

label_cf9cb8:
operator delete(x8_3)

if ((zx.d(var_d0.b) & 1) != 0)
label_cf9cc8:
    operator delete(x8_2)
    
    if ((zx.d(var_f0.b) & 1) == 0)
        goto label_cf95fc
    
    goto label_cf9cd8

label_cf95f4:
void* var_f8

if ((zx.d(var_f0.b) & 1) != 0)
label_cf9cd8:
    operator delete(x8)
    
    if ((zx.d(var_108[0]) & 1) != 0)
        operator delete(var_f8)
else
label_cf95fc:
    
    if ((zx.d(var_108[0]) & 1) != 0)
        operator delete(var_f8)
int64_t var_80_1 = 0
Botan::X509_CRL* var_218 = x25
var_90.q = &var_90:8
var_90:8.q = 0
int128_t var_1a8
void* var_148
void* var_130
int64_t* var_110
int64_t* var_70
int64_t* var_68

while (((*(*var_70 + 0x48))() & 1) != 0)
    int64_t x0_19
    uint64_t x1_9
    x0_19, x1_9 = (*(*var_70 + 0x28))(var_70, 0)
    __builtin_memset(&t, 0, 0x18)
    
    if (x1_9 != 0)
        if ((x1_9 & 0xffffffff80000000) != 0)
            int64_t* x0_75 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x19_5 = *var_218
            
            if (x19_5 != 0)
                void* x0_76 = x19_5
                void** x21_5 = *(var_218 + 8)
                
                if (x21_5 != x19_5)
                    do
                        x21_5 -= 0x88
                        sub_f28658(var_218 + 0x10, x21_5)
                    while (x19_5 != x21_5)
                    
                    x0_76 = *var_218
                
                *(var_218 + 8) = x19_5
                operator delete(x0_76)
            
            std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > > > >::destroy(
                &var_90)
            
            if (var_68 != 0)
                int64_t x9_19
                int32_t i
                
                do
                    x9_19 = __ldaxr(&var_68[1])
                    i = __stlxr(x9_19 - 1, &var_68[1])
                while (i != 0)
                
                if (x9_19 == 0)
                    (*(*var_68 + 0x10))(var_68)
                    std::__ndk1::__shared_weak_count::__release_weak()
            
            sub_1101e04(x0_75)
            noreturn
        
        int64_t x0_21 = operator new(x1_9)
        int64_t x19_1 = x0_21 + x1_9
        t.q = x0_21
        t:8.q = x0_21
        int64_t var_1d0_1 = x19_1
        memcpy(x0_21, x0_19, x1_9)
        t:8.q = x19_1
    
    Botan::X509_Certificate::X509_Certificate(&tp)
    void* x0_23 = t.q
    
    if (x0_23 != 0)
        t:8.q = x0_23
        operator delete(x0_23)
    
    (*(*var_70 + 0x38))(var_70, 1)
    Botan::CRL_Entry::CRL_Entry(&var_210, &tp)
    void* x0_27 = Botan::X509_Certificate::data()
    void* i_4 = var_90:8.q
    
    if (i_4 == 0)
    label_cf9764:
        Botan::X509_Certificate::data()
        var_d0.q = _vtable_for_Botan::CRL_Entry + 0x10
        var_d0:8.q = var_210:8.q
        
        if (x8_6 != 0)
            int32_t i_1
            
            do
                i_1 = __stxr(__ldxr(&x8_6[1]) + 1, &x8_6[1])
            while (i_1 != 0)
        
        sub_cfd9bc(&var_b0, &var_d0, 1)
        Botan::X509_DN::X509_DN(&t)
        int128_t v0_7 = var_b0
        __builtin_memset(&var_b0, 0, 0x18)
        var_1a8 = v0_7
        void* var_198_1 = x8_3
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > > > >::__emplace_unique_key_args<Botan::X509_DN, std::__ndk1::pair<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > > >(
            &var_90, &t)
        std::__ndk1::pair<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >::~pair()
        void* x21_2 = var_b0.q
        
        if (x21_2 != 0)
            void** x19_2 = var_b0:8.q
            void* x0_36
            
            if (x19_2 != x21_2)
                do
                    x19_2 = &x19_2[-3]
                    *x19_2 = _vtable_for_Botan::CRL_Entry + 0x10
                    int64_t* x20_4 = x19_2[2]
                    
                    if (x20_4 != 0)
                        int64_t x9_7
                        int32_t i_2
                        
                        do
                            x9_7 = __ldaxr(&x20_4[1])
                            i_2 = __stlxr(x9_7 - 1, &x20_4[1])
                        while (i_2 != 0)
                        
                        if (x9_7 == 0)
                            (*(*x20_4 + 0x10))(x20_4)
                            std::__ndk1::__shared_weak_count::__release_weak()
                while (x19_2 != x21_2)
                
                x0_36 = var_b0.q
            else
                x0_36 = x21_2
            
            var_b0:8.q = x21_2
            operator delete(x0_36)
        
        var_d0.q = _vtable_for_Botan::CRL_Entry + 0x10
        
        if (x8_6 != 0)
            int64_t x9_8
            int32_t i_3
            
            do
                x9_8 = __ldaxr(&x8_6[1])
                i_3 = __stlxr(x9_8 - 1, &x8_6[1])
            while (i_3 != 0)
            
            if (x9_8 == 0)
                (*(*x8_6 + 0x10))(x8_6)
                std::__ndk1::__shared_weak_count::__release_weak()
    else
        void* i_13 = &var_90:8
        int32_t x0_29
        void* i_11
        void* i_14
        
        do
            i_11 = i_4
            i_14 = i_13
            x0_29 = Botan::operator<(i_4 + 0x20, x0_27 + 0x58)
            int32_t temp3_1 = x0_29 & 1
            int64_t x8_26
            
            x8_26 = temp3_1 != 0 ? 8 : 0
            
            i_4 = *(i_11 + x8_26)
            
            i_13 = temp3_1 != 0 ? i_14 : i_11
        while (i_4 != 0)
        
        if (i_13 == &var_90:8)
            goto label_cf9764
        
        void* i_12
        
        if ((x0_29 & 1) != 0)
            i_12 = i_14
        else
            i_12 = i_11
        
        if ((Botan::operator<(x0_27 + 0x58, i_12 + 0x20) & 1) != 0)
            goto label_cf9764
        
        int64_t* x8_38 = *(i_13 + 0x60)
        
        if (x8_38 == *(i_13 + 0x68))
            std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> >::__push_back_slow_path<Botan::CRL_Entry const&>(
                i_13 + 0x58)
        else
            *x8_38 = _vtable_for_Botan::CRL_Entry + 0x10
            x8_38[1] = var_210:8.q
            x8_38[2] = x8_6
            
            if (x8_6 != 0)
                int32_t i_5
                
                do
                    i_5 = __stxr(__ldxr(&x8_6[1]) + 1, &x8_6[1])
                while (i_5 != 0)
            
            *(i_13 + 0x60) = &x8_38[3]
    
    var_210.q = _vtable_for_Botan::CRL_Entry + 0x10
    int64_t x9_14
    
    if (x8_6 != 0)
        int32_t i_6
        
        do
            x9_14 = __ldaxr(&x8_6[1])
            i_6 = __stlxr(x9_14 - 1, &x8_6[1])
        while (i_6 != 0)
    
    int64_t* x20_7
    
    if (x8_6 != 0 && x9_14 == 0)
        (*(*x8_6 + 0x10))(x8_6)
        std::__ndk1::__shared_weak_count::__release_weak()
        x20_7 = var_110
        x25 = var_218
        tp.tm_sec = (_vtable_for_Botan::X509_Certificate + 0x10).d
        tp.tm_min = (_vtable_for_Botan::X509_Certificate + 0x10):4.d
        
        if (x20_7 != 0)
            goto label_cf9934
    else
        x20_7 = var_110
        x25 = var_218
        tp.tm_sec = (_vtable_for_Botan::X509_Certificate + 0x10).d
        tp.tm_min = (_vtable_for_Botan::X509_Certificate + 0x10):4.d
        
        if (x20_7 != 0)
        label_cf9934:
            int64_t x9_15
            int32_t i_7
            
            do
                x9_15 = __ldaxr(&x20_7[1])
                i_7 = __stlxr(x9_15 - 1, &x20_7[1])
            while (i_7 != 0)
            
            if (x9_15 == 0)
                (*(*x20_7 + 0x10))(x20_7)
                std::__ndk1::__shared_weak_count::__release_weak()
    tp.tm_sec = (_vtable_for_Botan::X509_Object + 0x10).d
    tp.tm_min = (_vtable_for_Botan::X509_Object + 0x10):4.d
    
    if (var_130 != 0)
        void* var_128_1 = var_130
        operator delete(var_130)
    
    if (var_148 != 0)
        void* var_140_1 = var_148
        operator delete(var_148)
    
    char const* tm_zone = tp.tm_zone
    tp.tm_hour = (_vtable_for_Botan::AlgorithmIdentifier + 0x10).d
    tp.tm_mday = (_vtable_for_Botan::AlgorithmIdentifier + 0x10):4.d
    
    if (tm_zone != 0)
        char const* tm_zone_2 = tm_zone
        operator delete(tm_zone)
    
    void* x0_49
    x0_49.d = tp.tm_wday
    x0_49:4.d = tp.tm_yday
    tp.tm_mon = (_vtable_for_Botan::OID + 0x10).d
    tp.tm_year = (_vtable_for_Botan::OID + 0x10):4.d
    
    if (x0_49 != 0)
        tp.tm_isdst.q = x0_49
        operator delete(x0_49)

__builtin_memset(x25, 0, 0x18)
var_b0.q = std::__ndk1::chrono::system_clock::now()
var_210.q = _vtable_for_Botan::ASN1_Time + 0x10
t.q = std::__ndk1::chrono::system_clock::to_time_t(&var_b0)
int128_t v0_8
int128_t v1
uint128_t v2
v0_8, v1, v2 = gmtime_r(&t, &tp)
v0_8.d = tp.tm_mon
v0_8:4.d = tp.tm_year
v1.q = 0x76c00000001
v2.d = tp.tm_sec
v2:4.d = tp.tm_min
v2:8.d = tp.tm_hour
v2:0xc.d = tp.tm_mday
int64_t* i_8 = var_90.q
int128_t v0_9 = v0_8 + v1
uint128_t v1_1 = vrev64q_s32(v2)
int32_t x8_49

if (v0_9:4.d u> 0x801)
    x8_49 = 0x18
else
    x8_49 = 0x17

uint128_t v1_2 = vextq_s8(v1_1, v1_1, 8)
int32_t var_1f0 = x8_49
var_210:8.q = vrev64_s32(v0_9)
int64_t* var_200
var_200.o = v1_2

while (i_8 != &var_90:8)
    Botan::X509_DN::X509_DN(&t)
    std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> >::vector(
        &var_1a8)
    Botan::X509_CRL::X509_CRL(&tp, &t, &var_210, &var_210)
    int64_t* x21_3 = *(x25 + 8)
    void* var_128_2
    
    if (x21_3 u>= *(x25 + 0x10))
        std::__ndk1::vector<Botan::X509_CRL, std::__ndk1::allocator<Botan::X509_CRL> >::__push_back_slow_path<Botan::X509_CRL>(
            x25)
        tp.tm_sec = (_vtable_for_Botan::X509_CRL + 0x10).d
        tp.tm_min = (_vtable_for_Botan::X509_CRL + 0x10):4.d
        
        if (var_110 == 0)
        label_cf9b4c:
            tp.tm_sec = (_vtable_for_Botan::X509_Object + 0x10).d
            tp.tm_min = (_vtable_for_Botan::X509_Object + 0x10):4.d
            
            if (var_130 != 0)
                var_128_2 = var_130
                operator delete(var_130)
        else
            int64_t x9_17
            int32_t j
            
            do
                x9_17 = __ldaxr(&var_110[1])
                j = __stlxr(x9_17 - 1, &var_110[1])
            while (j != 0)
            
            if (x9_17 != 0)
                goto label_cf9b4c
            
            (*(*var_110 + 0x10))(var_110)
            std::__ndk1::__shared_weak_count::__release_weak()
            tp.tm_sec = (_vtable_for_Botan::X509_Object + 0x10).d
            tp.tm_min = (_vtable_for_Botan::X509_Object + 0x10):4.d
            
            if (var_130 != 0)
                var_128_2 = var_130
                operator delete(var_130)
    else
        Botan::X509_Object::X509_Object(x21_3)
        *x21_3 = _vtable_for_Botan::X509_CRL + 0x10
        int64_t var_118
        x21_3[0xf] = var_118
        x21_3[0x10] = var_110
        var_118 = 0
        var_110 = nullptr
        *(x25 + 8) = &x21_3[0x11]
        tp.tm_sec = (_vtable_for_Botan::X509_Object + 0x10).d
        tp.tm_min = (_vtable_for_Botan::X509_Object + 0x10):4.d
        
        if (var_130 != 0)
            var_128_2 = var_130
            operator delete(var_130)
    
    if (var_148 != 0)
        void* var_140_2 = var_148
        operator delete(var_148)
    
    char const* tm_zone_1 = tp.tm_zone
    tp.tm_hour = (_vtable_for_Botan::AlgorithmIdentifier + 0x10).d
    tp.tm_mday = (_vtable_for_Botan::AlgorithmIdentifier + 0x10):4.d
    
    if (tm_zone_1 != 0)
        char const* tm_zone_3 = tm_zone_1
        operator delete(tm_zone_1)
    
    void* x0_62
    x0_62.d = tp.tm_wday
    x0_62:4.d = tp.tm_yday
    tp.tm_mon = (_vtable_for_Botan::OID + 0x10).d
    tp.tm_year = (_vtable_for_Botan::OID + 0x10):4.d
    
    if (x0_62 != 0)
        tp.tm_isdst.q = x0_62
        operator delete(x0_62)
    
    std::__ndk1::pair<Botan::X509_DN const, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >::~pair()
    int64_t* j_2 = i_8[1]
    
    if (j_2 == 0)
        void* x8_56 = &i_8[2]
        int64_t* i_10 = *x8_56
        
        if (*i_10 == i_8)
            i_8 = i_10
        else
            void* j_1
            
            do
                j_1 = *x8_56
                x8_56 = j_1 + 0x10
                i_8 = *x8_56
            while (*i_8 != j_1)
    else
        do
            i_8 = j_2
            j_2 = *j_2
        while (j_2 != 0)

int64_t result = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<Botan::CRL_Entry, std::__ndk1::allocator<Botan::CRL_Entry> > > > >::destroy(
    &var_90)

if (var_68 != 0)
    int64_t x9_18
    int32_t i_9
    
    do
        x9_18 = __ldaxr(&var_68[1])
        i_9 = __stlxr(x9_18 - 1, &var_68[1])
    while (i_9 != 0)
    
    if (x9_18 == 0)
        (*(*var_68 + 0x10))(var_68)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
