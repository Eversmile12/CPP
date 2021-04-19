.PHONY: clean All

All:
	@echo "----------Building project:[ OOP_Part_one - Debug ]----------"
	@cd "OOP_Part_one" && "$(MAKE)" -f  "OOP_Part_one.mk"
clean:
	@echo "----------Cleaning project:[ OOP_Part_one - Debug ]----------"
	@cd "OOP_Part_one" && "$(MAKE)" -f  "OOP_Part_one.mk" clean
