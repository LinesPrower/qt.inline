
// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

//  header block end

//  body block begin
// [-3] QList<T> & operator=(const QList<T> &)
extern "C"
QStringList* C_QStringList_operator_equal_0(void* this_ , QStringList* l) {
    // QStringList_operator_equal_0()
    auto rv =  ((QStringList*)this_)->operator=(*l);
    return (QStringList*)this_;
}

// [-3] QList<T> & operator=(QList<T> &&)
extern "C"
QStringList* C_QStringList_operator_equal_1(void* this_ , QStringList* other) {
    // QStringList_operator_equal_1()
    auto rv =  ((QStringList*)this_)->operator=(*other);
    return (QStringList*)this_;
}

// [-2] void swap(QList<T> &)
extern "C"
void C_QStringList_swap_0(void* this_ , QStringList* other) {
    // QStringList_swap_0()
     ((QStringList*)this_)->swap(*other);
}

// [1] bool operator==(const QList<T> &)
extern "C"
bool C_QStringList_operator_equal_equal_0(void* this_ , QStringList* l) {
    // QStringList_operator_equal_equal_0()
    auto rv =  ((QStringList*)this_)->operator==(*l);
    return rv;
}

// [1] bool operator!=(const QList<T> &)
extern "C"
bool C_QStringList_operator_not_equal_0(void* this_ , QStringList* l) {
    // QStringList_operator_not_equal_0()
    auto rv =  ((QStringList*)this_)->operator!=(*l);
    return rv;
}

// [4] int size()
extern "C"
int C_QStringList_size_0(void* this_ ) {
    // QStringList_size_0()
    auto rv =  ((QStringList*)this_)->size();
    return rv;
}

// [-2] void detach()
extern "C"
void C_QStringList_detach_0(void* this_ ) {
    // QStringList_detach_0()
     ((QStringList*)this_)->detach();
}

// [-2] void detachShared()
extern "C"
void C_QStringList_detachShared_0(void* this_ ) {
    // QStringList_detachShared_0()
     ((QStringList*)this_)->detachShared();
}

// [1] bool isDetached()
extern "C"
bool C_QStringList_isDetached_0(void* this_ ) {
    // QStringList_isDetached_0()
    auto rv =  ((QStringList*)this_)->isDetached();
    return rv;
}

// [-2] void setSharable(bool)
extern "C"
void C_QStringList_setSharable_0(void* this_ , bool sharable) {
    // QStringList_setSharable_0()
     ((QStringList*)this_)->setSharable(sharable);
}

// [1] bool isSharedWith(const QList<T> &)
extern "C"
bool C_QStringList_isSharedWith_0(void* this_ , QStringList* other) {
    // QStringList_isSharedWith_0()
    auto rv =  ((QStringList*)this_)->isSharedWith(*other);
    return rv;
}

// [1] bool isEmpty()
extern "C"
bool C_QStringList_isEmpty_0(void* this_ ) {
    // QStringList_isEmpty_0()
    auto rv =  ((QStringList*)this_)->isEmpty();
    return rv;
}

// [-2] void clear()
extern "C"
void C_QStringList_clear_0(void* this_ ) {
    // QStringList_clear_0()
     ((QStringList*)this_)->clear();
}

// [-3] const T & at(int)
extern "C"
QString* C_QStringList_at_0(void* this_ , int i) {
    // QStringList_at_0()
    auto rv =  ((QStringList*)this_)->at(i);
    return new decltype(rv)(rv);
}

// [-3] const T & operator[](int)
extern "C"
QString* C_QStringList_operator_get_index_0(void* this_ , int i) {
    // QStringList_operator_get_index_0()
    auto rv =  ((QStringList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-3] T & operator[](int)
extern "C"
QString* C_QStringList_operator_get_index_1(void* this_ , int i) {
    // QStringList_operator_get_index_1()
    auto rv =  ((QStringList*)this_)->operator[](i);
    return new decltype(rv)(rv);
}

// [-2] void reserve(int)
extern "C"
void C_QStringList_reserve_0(void* this_ , int size) {
    // QStringList_reserve_0()
     ((QStringList*)this_)->reserve(size);
}

// [-2] void append(const T &)
extern "C"
void C_QStringList_append_0(void* this_ , QString* t) {
    // QStringList_append_0()
     ((QStringList*)this_)->append(*t);
}

// [-2] void append(const QList<T> &)
extern "C"
void C_QStringList_append_1(void* this_ , QStringList* t) {
    // QStringList_append_1()
     ((QStringList*)this_)->append(*t);
}

// [-2] void prepend(const T &)
extern "C"
void C_QStringList_prepend_0(void* this_ , QString* t) {
    // QStringList_prepend_0()
     ((QStringList*)this_)->prepend(*t);
}

// [-2] void insert(int, const T &)
extern "C"
void C_QStringList_insert_0(void* this_ , int i, QString* t) {
    // QStringList_insert_0()
     ((QStringList*)this_)->insert(i, *t);
}

// [-2] void replace(int, const T &)
extern "C"
void C_QStringList_replace_0(void* this_ , int i, QString* t) {
    // QStringList_replace_0()
     ((QStringList*)this_)->replace(i, *t);
}

// [-2] void removeAt(int)
extern "C"
void C_QStringList_removeAt_0(void* this_ , int i) {
    // QStringList_removeAt_0()
     ((QStringList*)this_)->removeAt(i);
}

// [4] int removeAll(const T &)
extern "C"
int C_QStringList_removeAll_0(void* this_ , QString* t) {
    // QStringList_removeAll_0()
    auto rv =  ((QStringList*)this_)->removeAll(*t);
    return rv;
}

// [1] bool removeOne(const T &)
extern "C"
bool C_QStringList_removeOne_0(void* this_ , QString* t) {
    // QStringList_removeOne_0()
    auto rv =  ((QStringList*)this_)->removeOne(*t);
    return rv;
}

// [-3] T takeAt(int)
extern "C"
QString* C_QStringList_takeAt_0(void* this_ , int i) {
    // QStringList_takeAt_0()
    auto rv =  ((QStringList*)this_)->takeAt(i);
    return new decltype(rv)(rv);
}

// [-3] T takeFirst()
extern "C"
QString* C_QStringList_takeFirst_0(void* this_ ) {
    // QStringList_takeFirst_0()
    auto rv =  ((QStringList*)this_)->takeFirst();
    return new decltype(rv)(rv);
}

// [-3] T takeLast()
extern "C"
QString* C_QStringList_takeLast_0(void* this_ ) {
    // QStringList_takeLast_0()
    auto rv =  ((QStringList*)this_)->takeLast();
    return new decltype(rv)(rv);
}

// [-2] void move(int, int)
extern "C"
void C_QStringList_move_0(void* this_ , int from, int to) {
    // QStringList_move_0()
     ((QStringList*)this_)->move(from, to);
}

// [-2] void swap(int, int)
extern "C"
void C_QStringList_swap_1(void* this_ , int i, int j) {
    // QStringList_swap_1()
     ((QStringList*)this_)->swap(i, j);
}

// [4] int indexOf(const T &, int)
extern "C"
int C_QStringList_indexOf_0(void* this_ , QString* t, int from) {
    // QStringList_indexOf_0()
    auto rv =  ((QStringList*)this_)->indexOf(*t, from);
    return rv;
}

// [4] int lastIndexOf(const T &, int)
extern "C"
int C_QStringList_lastIndexOf_0(void* this_ , QString* t, int from) {
    // QStringList_lastIndexOf_0()
    auto rv =  ((QStringList*)this_)->lastIndexOf(*t, from);
    return rv;
}

// [1] bool contains(const T &)
extern "C"
bool C_QStringList_contains_0(void* this_ , QString* t) {
    // QStringList_contains_0()
    auto rv =  ((QStringList*)this_)->contains(*t);
    return rv;
}

// [4] int count(const T &)
extern "C"
int C_QStringList_count_0(void* this_ , QString* t) {
    // QStringList_count_0()
    auto rv =  ((QStringList*)this_)->count(*t);
    return rv;
}

// [-3] QList::iterator begin()
extern "C"
QStringList::iterator* C_QStringList_begin_0(void* this_ ) {
    // QStringList_begin_0()
    auto rv =  ((QStringList*)this_)->begin();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator end()
extern "C"
QStringList::iterator* C_QStringList_end_0(void* this_ ) {
    // QStringList_end_0()
    auto rv =  ((QStringList*)this_)->end();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rbegin()
extern "C"
QStringList::reverse_iterator* C_QStringList_rbegin_0(void* this_ ) {
    // QStringList_rbegin_0()
    auto rv =  ((QStringList*)this_)->rbegin();
    return new decltype(rv)(rv);
}

// [-3] QList::reverse_iterator rend()
extern "C"
QStringList::reverse_iterator* C_QStringList_rend_0(void* this_ ) {
    // QStringList_rend_0()
    auto rv =  ((QStringList*)this_)->rend();
    return new decltype(rv)(rv);
}

// [-3] QList::iterator insert(QList::iterator, const T &)
extern "C"
QStringList::iterator* C_QStringList_insert_1(void* this_ , QStringList::iterator* before, QString* t) {
    // QStringList_insert_1()
    auto rv =  ((QStringList*)this_)->insert(*before, *t);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator)
extern "C"
QStringList::iterator* C_QStringList_erase_0(void* this_ , QStringList::iterator* pos) {
    // QStringList_erase_0()
    auto rv =  ((QStringList*)this_)->erase(*pos);
    return new decltype(rv)(rv);
}

// [-3] QList::iterator erase(QList::iterator, QList::iterator)
extern "C"
QStringList::iterator* C_QStringList_erase_1(void* this_ , QStringList::iterator* first, QStringList::iterator* last) {
    // QStringList_erase_1()
    auto rv =  ((QStringList*)this_)->erase(*first, *last);
    return new decltype(rv)(rv);
}

// [4] int count()
extern "C"
int C_QStringList_count_1(void* this_ ) {
    // QStringList_count_1()
    auto rv =  ((QStringList*)this_)->count();
    return rv;
}

// [4] int length()
extern "C"
int C_QStringList_length_0(void* this_ ) {
    // QStringList_length_0()
    auto rv =  ((QStringList*)this_)->length();
    return rv;
}

// [-3] T & first()
extern "C"
QString* C_QStringList_first_0(void* this_ ) {
    // QStringList_first_0()
    auto rv =  ((QStringList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] const T & constFirst()
extern "C"
QString* C_QStringList_constFirst_0(void* this_ ) {
    // QStringList_constFirst_0()
    auto rv =  ((QStringList*)this_)->constFirst();
    return new decltype(rv)(rv);
}

// [-3] const T & first()
extern "C"
QString* C_QStringList_first_1(void* this_ ) {
    // QStringList_first_1()
    auto rv =  ((QStringList*)this_)->first();
    return new decltype(rv)(rv);
}

// [-3] T & last()
extern "C"
QString* C_QStringList_last_0(void* this_ ) {
    // QStringList_last_0()
    auto rv =  ((QStringList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & last()
extern "C"
QString* C_QStringList_last_1(void* this_ ) {
    // QStringList_last_1()
    auto rv =  ((QStringList*)this_)->last();
    return new decltype(rv)(rv);
}

// [-3] const T & constLast()
extern "C"
QString* C_QStringList_constLast_0(void* this_ ) {
    // QStringList_constLast_0()
    auto rv =  ((QStringList*)this_)->constLast();
    return new decltype(rv)(rv);
}

// [-2] void removeFirst()
extern "C"
void C_QStringList_removeFirst_0(void* this_ ) {
    // QStringList_removeFirst_0()
     ((QStringList*)this_)->removeFirst();
}

// [-2] void removeLast()
extern "C"
void C_QStringList_removeLast_0(void* this_ ) {
    // QStringList_removeLast_0()
     ((QStringList*)this_)->removeLast();
}

// [1] bool startsWith(const T &)
extern "C"
bool C_QStringList_startsWith_0(void* this_ , QString* t) {
    // QStringList_startsWith_0()
    auto rv =  ((QStringList*)this_)->startsWith(*t);
    return rv;
}

// [1] bool endsWith(const T &)
extern "C"
bool C_QStringList_endsWith_0(void* this_ , QString* t) {
    // QStringList_endsWith_0()
    auto rv =  ((QStringList*)this_)->endsWith(*t);
    return rv;
}

// [-3] QList<T> mid(int, int)
extern "C"
QStringList* C_QStringList_mid_0(void* this_ , int pos, int length) {
    // QStringList_mid_0()
    auto rv =  ((QStringList*)this_)->mid(pos, length);
    return (QStringList*)this_;
}

// [-3] T value(int)
extern "C"
QString* C_QStringList_value_0(void* this_ , int i) {
    // QStringList_value_0()
    auto rv =  ((QStringList*)this_)->value(i);
    return new decltype(rv)(rv);
}

// [-3] T value(int, const T &)
extern "C"
QString* C_QStringList_value_1(void* this_ , int i, QString* defaultValue) {
    // QStringList_value_1()
    auto rv =  ((QStringList*)this_)->value(i, *defaultValue);
    return new decltype(rv)(rv);
}

// [-2] void push_back(const T &)
extern "C"
void C_QStringList_push_back_0(void* this_ , QString* t) {
    // QStringList_push_back_0()
     ((QStringList*)this_)->push_back(*t);
}

// [-2] void push_front(const T &)
extern "C"
void C_QStringList_push_front_0(void* this_ , QString* t) {
    // QStringList_push_front_0()
     ((QStringList*)this_)->push_front(*t);
}

// [-3] T & front()
extern "C"
QString* C_QStringList_front_0(void* this_ ) {
    // QStringList_front_0()
    auto rv =  ((QStringList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] const T & front()
extern "C"
QString* C_QStringList_front_1(void* this_ ) {
    // QStringList_front_1()
    auto rv =  ((QStringList*)this_)->front();
    return new decltype(rv)(rv);
}

// [-3] T & back()
extern "C"
QString* C_QStringList_back_0(void* this_ ) {
    // QStringList_back_0()
    auto rv =  ((QStringList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-3] const T & back()
extern "C"
QString* C_QStringList_back_1(void* this_ ) {
    // QStringList_back_1()
    auto rv =  ((QStringList*)this_)->back();
    return new decltype(rv)(rv);
}

// [-2] void pop_front()
extern "C"
void C_QStringList_pop_front_0(void* this_ ) {
    // QStringList_pop_front_0()
     ((QStringList*)this_)->pop_front();
}

// [-2] void pop_back()
extern "C"
void C_QStringList_pop_back_0(void* this_ ) {
    // QStringList_pop_back_0()
     ((QStringList*)this_)->pop_back();
}

// [1] bool empty()
extern "C"
bool C_QStringList_empty_0(void* this_ ) {
    // QStringList_empty_0()
    auto rv =  ((QStringList*)this_)->empty();
    return rv;
}

// [-3] QList<T> & operator+=(const QList<T> &)
extern "C"
QStringList* C_QStringList_operator_add_equal_0(void* this_ , QStringList* l) {
    // QStringList_operator_add_equal_0()
    auto rv =  ((QStringList*)this_)->operator+=(*l);
    return (QStringList*)this_;
}

// [-3] QList<T> operator+(const QList<T> &)
extern "C"
QStringList* C_QStringList_operator_add_0(void* this_ , QStringList* l) {
    // QStringList_operator_add_0()
    auto rv =  ((QStringList*)this_)->operator+(*l);
    return (QStringList*)this_;
}

// [-3] QList<T> & operator+=(const T &)
extern "C"
QStringList* C_QStringList_operator_add_equal_1(void* this_ , QString* t) {
    // QStringList_operator_add_equal_1()
    auto rv =  ((QStringList*)this_)->operator+=(*t);
    return (QStringList*)this_;
}

// [-3] QList<T> & operator<<(const T &)
extern "C"
QStringList* C_QStringList_operator_left_shift_0(void* this_ , QString* t) {
    // QStringList_operator_left_shift_0()
    auto rv =  ((QStringList*)this_)->operator<<(*t);
    return (QStringList*)this_;
}

// [-3] QList<T> & operator<<(const QList<T> &)
extern "C"
QStringList* C_QStringList_operator_left_shift_1(void* this_ , QStringList* l) {
    // QStringList_operator_left_shift_1()
    auto rv =  ((QStringList*)this_)->operator<<(*l);
    return (QStringList*)this_;
}

// [-3] QVector<T> toVector()
extern "C"
void C_QStringList_toVector_0(void* this_ ) {
    // QStringList_toVector_0()
    auto rv =  ((QStringList*)this_)->toVector();
}

// [-3] std::list<T> toStdList()
extern "C"
void C_QStringList_toStdList_0(void* this_ ) {
    // QStringList_toStdList_0()
    auto rv =  ((QStringList*)this_)->toStdList();
}

extern "C"
void C_QStringList_dtor(void* this_ ) {
    delete((QStringList*)this_);
}

extern "C"
void C_QVariantList_dtor(void* this_ ) {
    delete((QVariantList*)this_);
}

extern "C"
void C_QModelIndexList_dtor(void* this_ ) {
    delete((QModelIndexList*)this_);
}

extern "C"
void C_QFileInfoList_dtor(void* this_ ) {
    delete((QFileInfoList*)this_);
}

extern "C"
void C_QObjectList_dtor(void* this_ ) {
    delete((QObjectList*)this_);
}

//  body block end
