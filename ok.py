class Library:
	def __init__(self,name):
		self.name = name

class Python(Library):
	def __init__(self,name,publication,version):
		super().__init__(name)
		self.publication = publication
		self.version = version


l1 = Python("web","penguin","second")



print(l1.__dict__)