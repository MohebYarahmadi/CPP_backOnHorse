.PHONY: clean All

All:
	@echo "----------Building project:[ Funtions - Debug ]----------"
	@cd "Funtions" && "$(MAKE)" -f  "Funtions.mk"
clean:
	@echo "----------Cleaning project:[ Funtions - Debug ]----------"
	@cd "Funtions" && "$(MAKE)" -f  "Funtions.mk" clean
