/*
 * Uuid.h
 *      Author: carlos
 */

#ifndef UUID_H_
#define UUID_H_

#include <random>

namespace ids {

class Uuid {
private:
	static constexpr char SEP = '-';
	static constexpr short FIRST_SEP_POSITION = 8;

	static int64_t get_rnd();

public:
	const int64_t most, least;

	Uuid(int64_t most, int64_t least);
	/**
	 * automatic generation of this uuid
	 * */
	Uuid();

	Uuid(const Uuid & id);

	bool operator==(const Uuid & id);
	bool operator!=(const Uuid & id);

	~Uuid() = default;

	const std::string to_str();

};

} /* namespace ids */

#endif /* UUID_H_ */
