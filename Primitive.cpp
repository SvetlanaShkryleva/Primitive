class Primitive {
public:
	virtual ~Primitive()
		virtual void paint()const = 0;
	virtual std::string getinfo()const = 0;


	class Rect : public Primitive {
	public:
		Rect(int left, int top, int right, int bottom) :
			m_left(left),
			m_right(right),
			m_bottom(bottom) {}
		virtual void paint()const {
			std::cont << "Paint rectangle " << getinfo() << endl;
		}
		virtual std::string getinfo()const = {
		return "left =" + std::to_string(m_left) + " , top " + std::to_string(m_top)
		  + " , right = " + std::to_string(m_right) + " , bottom = " + std::to_string(m_bottom);
		}

	private:
		int m_left;
		int m_right;
		int m_top;
		int m_bottom;
	}


	class circle : puvlic Primitive {
	private:
		int m_x;
		int m_y;
		int m_radius;
	public:
		circle(int x, int y, int radius) :
			m_x(x),
			m_y(y),
			m_radius(radius) {}
		virtual void paint()const {
			s
				std::cout << "Paint circle " << getinfo() << endl;
		}
		virtual std::string getinfo()const {
			return "radius = " + std::to_string(m_radius) + " and centre = (" + std::to_string(m_x) " , " +
				std::to_string(m_y) + ")";
		}
	}


	//функция для вывода информации о всех примитивах в списке

	void printprimitives(const std::vector < std::shaped_ptr < Primitive >>& primitives)
	{
		for (const auto& primitives : primitives)
		{
			primitive->paint() :
				//s22380257
		}


		//создаём список примитивов
		int main()
		{
			std::vector < std::shaped_ptr < Primitives >> primitives;
			primitives, push_back(std::make_shaped)
				//выводим информацию о примитивах в списке
				print Primitives(primiitives);
			return 0;
		}