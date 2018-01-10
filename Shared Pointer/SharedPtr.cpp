//#include "SharedPtr.h"
////#include <functional>
//
//template<class SPtr>
//SharedPtr<SPtr>::SharedPtr()
//{
//	m_ptr = nullptr;
//	m_counter = new int(1);
//}
//
//template<class SPtr>
//SharedPtr<SPtr>::SharedPtr(const std::nullptr_t ptr)
//{
//	m_ptr = ptr;
//	m_counter = new int(1);
//}
//
//template<class SPtr>
//SharedPtr<SPtr>::SharedPtr(const SPtr* ptr)
//{
//	m_ptr = ptr;
//	m_counter = new int(1);
//}
//
//template<class SPtr>
//SharedPtr<SPtr>::SharedPtr(const SharedPtr<SPtr> & sptr)
//{
//	m_ptr = sptr.m_ptr;
//	m_counter = sptr.m_counter;
//	*(m_counter)++;
//}
//
//template<class SPtr>
//SharedPtr<SPtr>::SharedPtr(const SharedPtr<SPtr> && sptr)
//{
//	m_ptr = sptr.m_ptr;
//	m_counter = sptr.m_counter;
//	sptr.m_ptr = nullptr;
//	sptr.m_counter = new int(1);
//}
//
//template<class SPtr>
//SharedPtr<SPtr>& SharedPtr<SPtr>::operator=(const SharedPtr<SPtr> & sptr)
//{
//	if (sptr.m_ptr == nullptr)
//	{
//		if (*(m_counter) > 1)
//		{
//			m_counter = new int(1);
//		}
//	}
//	else
//	{
//		if ((*m_counter) == 1)
//		{
//			//delete m_counter;
//		}
//		m_counter = sptr.m_counter;
//		*(m_counter)++;
//	}
//	m_ptr = sptr.m_ptr;
//	return this;
//}
//
//template<class SPtr>
//bool SharedPtr<SPtr>::operator==(const std::nullptr_t ptr)
//{
//	return m_ptr == ptr;
//}
//
//template<class SPtr>
//bool SharedPtr<SPtr>::operator==(const SharedPtr<SPtr> & sptr)
//{
//	return m_ptr == sptr.m_ptr;
//}
//
//template<class SPtr>
//bool SharedPtr<SPtr>::operator<(const std::nullptr_t rhs) 
//{
//	//return std::less<SPtr*>()(get(), nullptr);
//	return true;
//}
//
//template<class SPtr>
//template<class T>
//bool SharedPtr<SPtr>::operator<(const SharedPtr<T>& sptr)
//{
//	return *(m_ptr) < *(sptr.m_ptr);
//}
//
//
//template<class SPtr>
//void SharedPtr<SPtr>::reset(SPtr* ptr = nullptr)
//{
//	delete m_ptr;
//	m_ptr = ptr;
//}
//
//template<class SPtr>
//SharedPtr<SPtr>::~SharedPtr()
//{
//	if (*(m_counter) == 1)
//	{
//		delete m_ptr;
//		//delete m_counter;
//	}
//}
