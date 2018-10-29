#pragma once
#include "acl_cpp/acl_cpp_define.hpp"
#include "acl_cpp/stdlib/string.hpp"
#include "acl_cpp/stdlib/noncopyable.hpp"
#include <map>

namespace acl
{

/**
 * SQL ��ѯ����ѯ����������Զ��� sql �е�һЩ�����ַ�����ת�壬ʹ�÷�ʽ������
 * java hibernate �� SQL ��乹����ʽ
 */
class ACL_CPP_API query : public noncopyable
{
public:
	query();
	~query();

	/**
	 * ���� sql ��䣬��η�ʽ���÷��� printf ����
	 * @param sql_fmt {const char*} sql ��䣬��ʽ�磺
	 *  select * from xxx where name = :name and len >= %d
	 *  ���е� :name, ���� set_parameter �е�ֵ�����滻, len Ϊ����ֵ
	 * @return {query&}
	 */
	query& create_sql(const char* sql_fmt, ...) ACL_CPP_PRINTF(2, 3);

	/**
	 * ���� sql ��䣬�Ǳ�η�ʽ
	 * @param sql {const char*}  sql ��䣬��ʽ�磺
	 *  select * from xxx where name = :name and len >= :len
	 *  ���е� :name, :len ���� set_parameter �е�ֵ�����滻
	 * @return {query&}
	 */
	query& create(const char* sql);

	/**
	 * �����ַ������͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {const char*} ����ֵ
	 * @return {query&}
	 */
	query& set_parameter(const char* name, const char *value);

	/**
	 * �����ַ����͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {char} ����ֵ
	 * @return {query&}
	 */
	query& set_parameter(const char* name, char value);

	/**
	 * ���� 16 λ�������͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {short} ����ֵ
	 * @return {query&}
	 */
	query& set_parameter(const char* name, short value);

	/**
	 * ���� 32 λ�������͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {int} ����ֵ
	 * @return {query&}
	 */
	query& set_parameter(const char* name, int value);

	/**
	 * ���õ����ȸ������͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {float} �����ȸ�������
	 * @param precision {int} β���ľ���ֵ
	 * @return {query&}
	 */
	query& set_parameter(const char* name, float value, int precision = 8);

	/**
	 * ����˫���ȸ������͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {double} ˫���ȸ�������
	 * @param precision {int} β���ľ���ֵ
	 * @return {query&}
	 */
	query& set_parameter(const char* name, double value, int precision = 8);

	/**
	 * ���� 64 λ�������͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {long long int} ����ֵ
	 * @return {query&}
	 */
#if defined(_WIN32) || defined(_WIN64)
	query& set_parameter(const char* name, __int64 value);
#else
	query& set_parameter(const char* name, long long int value);
#endif

	/**
	 * ��������(time_t)���͵ı���ֵ
	 * @param name {const char*} ������
	 * @param value {time_t} ����ֵ
	 * @param fmt {const char*} ���ڸ�ʽ
	 * @return {query&}
	 */
	query& set_date(const char* name, time_t value,
		const char* fmt = "%Y-%m-%d %H:%M:%S");

	/**
	 * �Ա�η�ʽ���ñ���ֵ
	 * @param name {const char*} ������
	 * @param fmt {const char*} ���ֵ��ʽ
	 * @return {query&}
	 */
	query& set_format(const char* name, const char* fmt, ...)
		ACL_CPP_PRINTF(3, 4);

	/**
	 * �Ա�η�ʽ���ñ���ֵ
	 * @param name {const char*} ������
	 * @param fmt {const char*} ���ֵ��ʽ
	 * @param ap {va_list} ���ֵ�б�
	 * @return {query&}
	 */
	query& set_vformat(const char* name, const char* fmt, va_list ap);

	/**
	 * �Բ�ѯ sql ������ת��󷵻ظ�������
	 * @return {const string&}
	 */
	const string& to_string();

	/**
	 * ��ղ�ѯ����һ�εĻ������ݣ����� SQL ��ѯ�����󱻶��ʹ��ʱ��Ӧ����ǰ����
	 * ���������֮ǰ�� SQL ��ѯ��״̬
	 */
	void reset();

	/**
	 * �� sql �е�һЩ�����ַ�����ת�崦�����Է�ֹ SQL ע������
	 * @param in {const char*} ����ֵ
	 * @param len {size_t} in ���ݳ���
	 * @param out {string&} �洢ת����Ľ���Ļ��������ò����������ȱ����
	 * @return {const string&} ת�崦����Ľ��(��ʵ�� out �ĵ�ַ����)
	 */
	static const string& escape(const char* in, size_t len, string& out);

	/**
	 * ��ʱ��ת���� DateTime ��ʽ���ַ���(YYYY-MM-DD HH:MM:SS)
	 * @param t {time_t} ʱ���
	 * @param out {string&} �洢ת������Ļ�����
	 * @param fmt {const char*} ���ڸ�ʽ���� _WIN32 �±��뱣֤�ø�ʽ����ȷ�ԣ�
	 *  ���� _WIN32 API ��������ԣ���ʽ�磺"%Y-%m-%d %H:%M:%S"
	 * @return {const char*} ת���󻺳�����ַ�������� NULL ���ʾת��ʧ��
	 */
	static const char* to_date(time_t t, string& out,
		const char* fmt = "%Y-%m-%d %H:%M:%S");

private:
	typedef enum
	{
		DB_PARAM_CHAR,
		DB_PARAM_SHORT,
		DB_PARAM_INT32,
		DB_PARAM_INT64,
		DB_PARAM_FLOAT,
		DB_PARAM_DOUBLE,
		DB_PARAM_STR
	} db_param_type;

	struct query_param
	{
		char type;
		int  dlen;
		int  precision;
		union
		{
			char  c;
			short s;
			int   n;
			long long int l;
			double d;
			float f;
			char  S[1];
		} v;
	};

	std::map<string, query_param*> params_;
	string* sql_buf_;
	string sql_;
	string buf_;

	void del_param(const string& key);
	bool append_key(string& buf, char* key);
};

} // namespace acl