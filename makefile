all:
	make -C array all
	make -C basic all
	make -C circularq all
	make -C fifo all
	make -C fifoq all
	make -C fifovector all
	make -C graph all
	make -C singlylinkedlist all
	make -C twosum all

clean:
	make -C array clean
	make -C basic clean
	make -C circularq clean
	make -C fifo clean
	make -C fifoq clean
	make -C fifovector clean
	make -C graph clean
	make -C singlylinkedlist clean
	make -C twosum clean

.PHONY: all clean
