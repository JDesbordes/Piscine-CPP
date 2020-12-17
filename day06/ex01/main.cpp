# include <iostream>
# include <string>

struct DataPre {char first[8]; int second; char third[8];};
struct Data { std::string s1; int n; std::string s2;};

void	*serialize(void)
{
	DataPre *temp = new DataPre;
	char alphanum[] = "0123456789ABCDEFHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i <8; i++)
		temp->first[i] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
	temp->second = std::rand();
	for (int i = 0; i <8; i++)
		temp->third[i] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
	//std::cout << std::string(temp->first,8) <<"\nnum = " << temp->second << "\nsecond string = "<< std::string(temp->third,8) << std::endl;
	return (reinterpret_cast<void *>(temp));
}

Data * deserialize(void * raw)
{
	Data *ret = new Data;
	char *temp;
	ret->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	temp = reinterpret_cast<char *>(raw) + 8;
	ret->n = *reinterpret_cast<int *>(temp);
	ret->s2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
	return (ret);
}

int main(void)
{
	void *temp;
	Data *deserialized;
<<<<<<< HEAD
	std::srand(std::time(NULL));
=======
	std::srand(std::time(NULL));
>>>>>>> 69b380d0ee4ec1c536b124aaa5b7ab528d247861
	temp = serialize();
	deserialized = deserialize(temp);
	std::cout << temp << std::endl;
	std::cout << "first string = "<< deserialized->s1 << "\nnum = " << deserialized->n << "\nsecond string = "<< deserialized->s2 <<std::endl;
	delete (temp);
	delete (deserialize);
	return (0);
}